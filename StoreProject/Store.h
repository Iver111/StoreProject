#ifndef STORE_H
#define STORE_H

#include "Administrator.h"

class Store {
private:
    Administrator product1;
    Administrator product2;
    Administrator product3;
    

public:
    // Конструктор з параметрами для ініціалізації трьох продуктів
    Store(const Administrator& p1, const Administrator& p2, const Administrator& p3);

    // Метод для демонстрації продуктів
    void displayProducts() const;

};
#endif // STORE_H
