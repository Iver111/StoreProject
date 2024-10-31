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
    std::string name; // ��������� �������
    double price;     // ��������� �������
    int quantity;     // ��������� �������

    Administrator(); // 3.1. ����������� ��� ���������
    Administrator(const std::string& name, double price, int quantity); // 3.1. ����������� � �����������
    Administrator(const Administrator& other); // 3.1. ����������� ���������
    Administrator(const std::string& name, double price, int quantity, const std::string& category, const std::string& sku, bool isAvailable); // 3.2. ����������� � ������������
    ~Administrator(); // 3.3. ����������

    void display() const; // 2.6. ³���������� ������
    void updateQuantity(int amount); // 2.6. ��������� ������� ������
    static int getTotalProducts(); // 3.4. ��������� �����
    void saveToFile(const std::string& filename); // 2.5. ����� � ����
    void loadFromFile(const std::string& filename); // 2.5. ������� � �����
    void allocateRandomQuantities(int count); // 12. �������� ���'�� ��� ������
    void sortQuantities(); // 12. ���������� ���������

private:
    static int totalProducts; // 3.4. �������� ����
    std::string category; // ��������� �������
    std::string sku; // ��������� �������
    bool isAvailable; // ��������� �������
    std::vector<int> quantities; // ��������� �������
};

// ������� ���� ������
void calculateDiscount(const Administrator& product, double discountRate); // 3.5. ������� ��� ���������� ������
void calculateDiscount(Administrator* product, double discountRate); // 3.6. ������������� �������
Administrator createSampleProduct(); // 3.7. �������, �� ������� ��'��� �����

#endif // PRODUCT_H
