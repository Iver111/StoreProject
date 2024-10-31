#include "pch.h"
#include "Store.h"
#include <iostream>

// Конструктор
Store::Store(const Administrator& p1, const Administrator& p2, const Administrator& p3)
    : product1(p1), product2(p2), product3(p3) {}

// Метод для демонстрації продуктів
void Store::displayProducts() const {
    std::cout << "Products in the store:" << std::endl;
    product1.display();
    product2.display();
    product3.display();
}
