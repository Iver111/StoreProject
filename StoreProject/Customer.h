#ifndef ORDER_H
#define ORDER_H

#include "Administrator.h"
#include <vector>

class Customer : protected Administrator {
public:
    Customer(); // 3.1. ����������� ��� ���������
    Customer(const std::vector<Administrator>& products); // 3.1. ����������� � �����������
    Customer(const Customer& other); // 3.1. ����������� ���������
    ~Customer(); // 3.3. ����������

    void addProduct(const Administrator& product); // 2.6. ��������� ������
    void removeProduct(const std::string& productName); // 2.6. ��������� ������
    void displayOrder() const; // 2.6. ³���������� ����������
    void processPayment(const std::string& method); // 2.6. ������� �������
    bool requestReturn(const std::string& productName); // 2.6. ����� �� ���������� ������
    void showBaseClassDetails();
private:
    std::vector<Administrator> products; // 2.6. ������ ������ � ���������
};

#endif // ORDER_H
