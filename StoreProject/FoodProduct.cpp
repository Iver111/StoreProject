#include "pch.h"
#include "FoodProduct.h"


// ����� ��� ����������� ���������� ��� �������
void FoodProduct::displayInfo() const {
    display(); // ������ ������ �������� �����
    std::cout << "Expiration Date: " << expirationDate << std::endl;
    std::cout << "Ingredients: " << ingredients << std::endl;
    std::cout << "Organic: " << (isOrganic ? "Yes" : "No") << std::endl;
    std::cout << "Calories: " << calories << std::endl;
    std::cout << "Brand: " << brand << std::endl;
}
