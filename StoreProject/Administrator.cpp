#include "pch.h"
#include "Administrator.h"

// Ініціалізація статичного поля
int Administrator::totalProducts = 0;

Administrator::Administrator() : name("Unknown"), price(0.0), quantity(0), category("General"), sku("000"), isAvailable(false) {
    totalProducts++; // 3.1. Без параметрів
}

Administrator::Administrator(const std::string& name, double price, int quantity)
    : name(name), price(price), quantity(quantity), category("General"), sku(name.substr(0, 3) + std::to_string(quantity)), isAvailable(quantity > 0) {
    totalProducts++; // 3.1. З параметрами
}

Administrator::Administrator(const Administrator& other)
    : name(other.name), price(other.price), quantity(other.quantity), category(other.category), sku(other.sku), isAvailable(other.isAvailable) {
    totalProducts++; // 3.1. Конструктор копіювання
}

// Конструктор з ініціалізацією
Administrator::Administrator(const std::string& name, double price, int quantity, const std::string& category, const std::string& sku, bool isAvailable)
    : name(name), price(price), quantity(quantity), category(category), sku(sku), isAvailable(isAvailable) {
    totalProducts++; // 3.2. Конструктор з ініціалізацією
}

Administrator::~Administrator() {
    std::cout << "Destructor called for " << name << std::endl; // 3.3. Деструктор
    totalProducts--;
}

void Administrator::display() const {
    std::cout << "Product: " << name << ", Price: " << price << ", Quantity: " << quantity << std::endl; // 6. Відображення
}

void Administrator::updateQuantity(int amount) {
    quantity += amount; // 6. Оновлення кількості
    isAvailable = quantity > 0; // Перевірка наявності
}

int Administrator::getTotalProducts() {
    return totalProducts; // 4. Статичний метод
}

// Запис у файл
void Administrator::saveToFile(const std::string& filename) {
    std::ofstream ofs(filename, std::ios::app);
    if (ofs) {
        ofs << name << "," << price << "," << quantity << "\n";
    }
}

// Читання з файлу
void Administrator::loadFromFile(const std::string& filename) {
    std::ifstream ifs(filename);
    if (ifs) {
        std::string line;
        while (std::getline(ifs, line)) {
            std::cout << line << std::endl;
        }
    }
}

// Виділення пам'яті для масиву
void Administrator::allocateRandomQuantities(int count) {
    quantities.resize(count);
    for (int& q : quantities) {
        q = rand() % 100; // Випадкові кількості
    }
}

// Сортування кількостей
void Administrator::sortQuantities() {
    std::sort(quantities.begin(), quantities.end());
}

// Функції для обчислення знижки
void calculateDiscount(const Administrator& product, double discountRate) {
    double discount = product.price * discountRate / 100;
    std::cout << "Discount for " << product.name << ": " << discount << std::endl; // 3.5. Функція обчислення знижки
}

void calculateDiscount(Administrator* product, double discountRate) {
    double discount = product->price * discountRate / 100;
    std::cout << "Discount for " << product->name << ": " << discount << std::endl; // 3.6. Перевантажена функція
}

// Функція, що повертає об'єкт класу
Administrator createSampleProduct() {
    return Administrator("Sample Product", 100.0, 20); // 3.7. Функція, що повертає об'єкт
}
