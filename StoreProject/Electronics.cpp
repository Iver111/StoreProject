#include "pch.h"
#include "Electronics.h"


// ����� ��� ����������� ���������� ��� ����������
void Electronics::displayInfo() const {
    display(); // ������ ������ �������� �����
    std::cout << "Brand: " << brand << std::endl;
    std::cout << "Model: " << model << std::endl;
}
void Electronics::showBaseClassDetails() {
    // ������ �� ������ �������� �����
    display();
    std::cout << "Accessing count: " << getTotalProducts() << std::endl;
}Electronics::~Electronics() {
    std::cout << "Electronics Destructor: " << name << std::endl;
}