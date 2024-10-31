#ifndef SHOPPINGCART_H
#define SHOPPINGCART_H

#include <vector>
#include "Product.h"

class ShoppingCart {
public:
    void addProduct(const Product& product); // Додавання товару
    void removeProduct(const std::string& productName); // Видалення товару
    void displayCart() const; // Відображення кошика
private:
    std::vector<Product> products; // Список товарів у кошику
};

#endif // SHOPPINGCART_H
