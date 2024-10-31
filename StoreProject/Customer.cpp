#include "pch.h"
#include "Customer.h"

Customer::Customer() {
    // Конструктор без параметрів
}

Customer::Customer(const std::vector<Administrator>& products) : products(products) {
    // Конструктор з параметрами
}

Customer::Customer(const Customer& other) : products(other.products) {
    // Конструктор копіювання
}

Customer::~Customer() {
    // Деструктор
}

void Customer::addProduct(const Administrator& product) {
    products.push_back(product); // 6. Додавання товару
}

void Customer::removeProduct(const std::string& productName) {
    products.erase(std::remove_if(products.begin(), products.end(),
        [&](const Administrator& p) { return p.name == productName; }), products.end()); // 6. Видалення товару
}

void Customer::displayOrder() const {
    for (const auto& product : products) {
        product.display(); // 6. Відображення
    }
}

void Customer::processPayment(const std::string& method) {
    std::cout << "Payment processed using: " << method << std::endl; // 6. Обробка платежу
}

bool Customer::requestReturn(const std::string& productName) {
    for (auto& product : products) {
        if (product.name == productName) {
            std::cout << "Return request for " << productName << " is approved." << std::endl; // 6. Запит на повернення
            return true;
        }
    }
    std::cout << "Product not found in order." << std::endl; // 6. Запит на повернення
    return false;
}
void Customer::showBaseClassDetails() {
    // Використання protected членів базового класу
    std::cout << "Base class details: " << name << ", Price: " << price << std::endl;
    // Виклик public методу базового класу
    std::cout << "Total products created: " << Administrator::getTotalProducts() << std::endl;
}