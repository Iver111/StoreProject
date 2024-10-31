#include "pch.h"
#include "Product.h"

Product::Product(const std::string& name, double price, int quantity,
    const std::string& category, const std::string& code, bool isAvailable,
    const std::string& description, const std::string& manufacturer)
    : name(name), price(price), quantity(quantity), category(category),
    code(code), isAvailable(isAvailable), description(description), manufacturer(manufacturer) {}

void Product::displayInfo() const {
    std::cout << "Product: " << name << ", Price: " << price << ", Quantity: " << quantity
        << ", Category: " << category << ", Code: " << code
        << ", Available: " << (isAvailable ? "Yes" : "No")
        << ", Description: " << description << ", Manufacturer: " << manufacturer << std::endl;
}
