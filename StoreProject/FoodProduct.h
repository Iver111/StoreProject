#ifndef FOODPRODUCT_H
#define FOODPRODUCT_H

#include "Administrator.h"

class FoodProduct : public Administrator {
public:
    FoodProduct(const std::string& name, double price, int quantity, const std::string& expirationDate, const std::string& ingredients, bool isOrganic, int calories, const std::string& brand)
        : Administrator(name, price, quantity), expirationDate(expirationDate), ingredients(ingredients), isOrganic(isOrganic), calories(calories), brand(brand) {}

    void displayInfo() const;

private:
    std::string expirationDate; // ���� ��������� ������
    std::string ingredients;     // �����䳺���
    bool isOrganic;             // ��������� �������
    int calories;               // �����
    std::string brand;          // �����
};

#endif // FOODPRODUCT_H
