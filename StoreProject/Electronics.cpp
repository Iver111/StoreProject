#include "pch.h"
#include "Electronics.h"


// Метод для відображення інформації про електроніку
void Electronics::displayInfo() const {
    display(); // Виклик методу базового класу
    std::cout << "Brand: " << brand << std::endl;
    std::cout << "Model: " << model << std::endl;
}
void Electronics::showBaseClassDetails() {
    // Доступ до методу базового класу
    display();
    std::cout << "Accessing count: " << getTotalProducts() << std::endl;
}Electronics::~Electronics() {
    std::cout << "Electronics Destructor: " << name << std::endl;
}