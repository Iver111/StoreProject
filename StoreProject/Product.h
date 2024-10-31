#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>
#include <iostream>

class Product {
public:
    Product(const std::string& name, double price, int quantity,
        const std::string& category, const std::string& code, bool isAvailable,
        const std::string& description, const std::string& manufacturer);

    virtual void displayInfo() const; // Метод для виведення інформації

protected:
    std::string name;
    double price;
    int quantity;
    std::string category;
    std::string code;
    bool isAvailable;
    std::string description;
    std::string manufacturer;
};

#endif // PRODUCT_H
