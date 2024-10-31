#include "pch.h"
#include "ShoppingCart.h"
#include <algorithm>
#include <iostream>

void ShoppingCart::addProduct(const Product& product) {
    products.push_back(product);
}

void ShoppingCart::removeProduct(const std::string& productName) {
    products.erase(std::remove_if(products.begin(), products.end(),
        [&](const Product& p) { return p.getName() == productName; }), products.end());
}

void ShoppingCart::displayCart() const {
    std::cout << "Shopping Cart:" << std::endl;
    for (const auto& product : products) {
        product.display();
    }
}
