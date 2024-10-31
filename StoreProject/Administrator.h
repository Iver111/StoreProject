#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>
#include <cstdlib>

class Administrator {
public:
    std::string name; // Загальний елемент
    double price;     // Загальний елемент
    int quantity;     // Загальний елемент

    Administrator(); // 3.1. Конструктор без параметрів
    Administrator(const std::string& name, double price, int quantity); // 3.1. Конструктор з параметрами
    Administrator(const Administrator& other); // 3.1. Конструктор копіювання
    Administrator(const std::string& name, double price, int quantity, const std::string& category, const std::string& sku, bool isAvailable); // 3.2. Конструктор з ініціалізацією
    ~Administrator(); // 3.3. Деструктор

    void display() const; // 2.6. Відображення товару
    void updateQuantity(int amount); // 2.6. Оновлення кількості товару
    static int getTotalProducts(); // 3.4. Статичний метод
    void saveToFile(const std::string& filename); // 2.5. Запис у файл
    void loadFromFile(const std::string& filename); // 2.5. Читання з файлу
    void allocateRandomQuantities(int count); // 12. Виділення пам'яті для масиву
    void sortQuantities(); // 12. Сортування кількостей

private:
    static int totalProducts; // 3.4. Статичне поле
    std::string category; // Приватний елемент
    std::string sku; // Приватний елемент
    bool isAvailable; // Приватний елемент
    std::vector<int> quantities; // Приватний елемент
};

// Функції поза класом
void calculateDiscount(const Administrator& product, double discountRate); // 3.5. Функція для обчислення знижки
void calculateDiscount(Administrator* product, double discountRate); // 3.6. Перевантажена функція
Administrator createSampleProduct(); // 3.7. Функція, що повертає об'єкт класу

#endif // PRODUCT_H
