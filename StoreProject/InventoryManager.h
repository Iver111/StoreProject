#ifndef INVENTORYMANAGER_H
#define INVENTORYMANAGER_H

#include "Administrator.h"

class InventoryManager : private Administrator { // Закрите наслідування
private:
    int inventoryID;

public:
    InventoryManager(const std::string& name, double price, int stock, int inventoryID);
    void displayProductInfo() const; // Метод для відображення інформації про товар
};

#endif // INVENTORYMANAGER_H
