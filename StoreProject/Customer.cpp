#include "pch.h"
#include "Customer.h"

Customer::Customer() {
    // ����������� ��� ���������
}

Customer::Customer(const std::vector<Administrator>& products) : products(products) {
    // ����������� � �����������
}

Customer::Customer(const Customer& other) : products(other.products) {
    // ����������� ���������
}

Customer::~Customer() {
    // ����������
}

void Customer::addProduct(const Administrator& product) {
    products.push_back(product); // 6. ��������� ������
}

void Customer::removeProduct(const std::string& productName) {
    products.erase(std::remove_if(products.begin(), products.end(),
        [&](const Administrator& p) { return p.name == productName; }), products.end()); // 6. ��������� ������
}

void Customer::displayOrder() const {
    for (const auto& product : products) {
        product.display(); // 6. ³����������
    }
}

void Customer::processPayment(const std::string& method) {
    std::cout << "Payment processed using: " << method << std::endl; // 6. ������� �������
}

bool Customer::requestReturn(const std::string& productName) {
    for (auto& product : products) {
        if (product.name == productName) {
            std::cout << "Return request for " << productName << " is approved." << std::endl; // 6. ����� �� ����������
            return true;
        }
    }
    std::cout << "Product not found in order." << std::endl; // 6. ����� �� ����������
    return false;
}
void Customer::showBaseClassDetails() {
    // ������������ protected ����� �������� �����
    std::cout << "Base class details: " << name << ", Price: " << price << std::endl;
    // ������ public ������ �������� �����
    std::cout << "Total products created: " << Administrator::getTotalProducts() << std::endl;
}