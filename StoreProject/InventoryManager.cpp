#include "pch.h"
#include "InventoryManager.h"
#include <iostream>

// Конструктор
InventoryManager::InventoryManager(const std::string& name, double price, int stock, int inventoryID)
    : Administrator(name, price,stock), inventoryID(inventoryID) {}

// Метод для відображення інформації про товар
void InventoryManager::displayProductInfo() const {
    // Оскільки наслідування закрите, доступ до protected членів можливий тільки в методах цього класу
    std::cout << "Product Info (Inventory ID: " << inventoryID << "):" << std::endl;
    std::cout << "Name: " << name << ", Price: " << price  << std::endl;
}
