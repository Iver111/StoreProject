#include "pch.h"
#include "FoodProduct.h"


// Метод для відображення інформації про продукт
void FoodProduct::displayInfo() const {
    display(); // Виклик методу базового класу
    std::cout << "Expiration Date: " << expirationDate << std::endl;
    std::cout << "Ingredients: " << ingredients << std::endl;
    std::cout << "Organic: " << (isOrganic ? "Yes" : "No") << std::endl;
    std::cout << "Calories: " << calories << std::endl;
    std::cout << "Brand: " << brand << std::endl;
}
