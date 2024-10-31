#ifndef SHOPPINGCART_H
#define SHOPPINGCART_H

#include <vector>
#include "Product.h"

class ShoppingCart {
public:
    void addProduct(const Product& product); // ��������� ������
    void removeProduct(const std::string& productName); // ��������� ������
    void displayCart() const; // ³���������� ������
private:
    std::vector<Product> products; // ������ ������ � ������
};

#endif // SHOPPINGCART_H
