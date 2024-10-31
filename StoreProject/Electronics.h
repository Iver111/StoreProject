#ifndef ELECTRONICS_H
#define ELECTRONICS_H

#include "Administrator.h"

class Electronics : public Administrator {
public:
    Electronics(const std::string& name, double price, int quantity, const std::string& brand, const std::string& model)
        : Administrator(name, price, quantity), brand(brand), model(model), powerSource(powerSource), dimensions(dimensions) {}

    void displayInfo() const;
    void showBaseClassDetails();
    ~Electronics();
private:
    std::string brand;          // �����
    std::string model;         // ������         // ����� ������
    std::string powerSource;    // ������� ��������
    std::string dimensions;     // ������
};

#endif // ELECTRONICS_H
