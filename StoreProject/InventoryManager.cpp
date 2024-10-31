#include "pch.h"
#include "InventoryManager.h"
#include <iostream>

// �����������
InventoryManager::InventoryManager(const std::string& name, double price, int stock, int inventoryID)
    : Administrator(name, price,stock), inventoryID(inventoryID) {}

// ����� ��� ����������� ���������� ��� �����
void InventoryManager::displayProductInfo() const {
    // ������� ����������� �������, ������ �� protected ����� �������� ����� � ������� ����� �����
    std::cout << "Product Info (Inventory ID: " << inventoryID << "):" << std::endl;
    std::cout << "Name: " << name << ", Price: " << price  << std::endl;
}
