#ifndef ORDER_H
#define ORDER_H

#include "Administrator.h"
#include <vector>

class Customer : protected Administrator {
public:
    Customer(); // 3.1. Конструктор без параметрів
    Customer(const std::vector<Administrator>& products); // 3.1. Конструктор з параметрами
    Customer(const Customer& other); // 3.1. Конструктор копіювання
    ~Customer(); // 3.3. Деструктор

    void addProduct(const Administrator& product); // 2.6. Додавання товару
    void removeProduct(const std::string& productName); // 2.6. Видалення товару
    void displayOrder() const; // 2.6. Відображення замовлення
    void processPayment(const std::string& method); // 2.6. Обробка платежу
    bool requestReturn(const std::string& productName); // 2.6. Запит на повернення товару
    void showBaseClassDetails();
private:
    std::vector<Administrator> products; // 2.6. Список товарів у замовленні
};

#endif // ORDER_H
