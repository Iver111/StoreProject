#ifndef SMARTDEVICE_H
#define SMARTDEVICE_H

#include "Electronics.h"
#include "Administrator.h"

class SmartDevice : public Electronics, public Administrator {
public:
    SmartDevice(const std::string& name, double price, int quantity, const std::string& brand,
        const std::string& model, int warranty, const std::string& additionalFeature)
        : Electronics(name, price, quantity, brand, model), Administrator(name, price, quantity), additionalFeature(additionalFeature) {}
    ~SmartDevice();
    void displayInfo() const; // Відображення інформації про розумний пристрій

private:
    std::string additionalFeature; // Додаткова функція
};

#endif // SMARTDEVICE_H
