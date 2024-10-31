#include "pch.h"



// int main(array<System::String ^> ^args)
// {
//    return 0;
// }

#include "Main.h"
#include <iostream>
#include "FoodProduct.h"
#include "Electronics.h"
#include "Administrator.h"
#include "Customer.h"
#include "Store.h"
#include "InventoryManager.h"
#include "SmartDevice.h"
using namespace System::Windows::Forms;


int main()
{
    AllocConsole();
    freopen("CONOUT$", "w", stdout);
    freopen("CONOUT$", "w", stderr);
    Administrator productDefault; // 3.8 Простий
    Administrator productExplicit("Banana", 0.75, 50); // 3.8 Явний
    Administrator productCompact{ "Orange", 1.2, 30 }; // 3.8 Скорочений


    // 2.8. Створення об'єктів
    Administrator product1("Product 1", 100.0, 10); // 2.8. Просте створення
    Administrator product2("Product 2", 150.0, 5); // 2.8. Просте створення
    Administrator product3 = createSampleProduct(); // 2.8. Використання функції для створення об'єкта

    // 3.9. Статичне і динамічне створення об'єкта
    Administrator* product4 = new Administrator("Product 4", 200.0, 20); // 3.9. Динамічне створення
    product3.updateQuantity(5); // Оновлення кількості
    // 3.10. Демонстрація всіх конструкторів
    productDefault.display();
    // 3.10.1. Конструктор з параметрами
    Administrator productParam("Product A", 100.0, 5); // Виклик параметризованого конструктора
    productParam.display();

    // 3.10.3. Копіювальний конструктор
    Administrator productCopy = productParam; // Виклик копіювального конструктора
    productCopy.display();

    // 3.10.4. Конструктор з ініціалізаційним списком
    Administrator productInitList("Product B", 250.0, 15); // Виклик конструктора з ініціалізаційним списком
    productInitList.display();

    // 3.11
    Administrator product111("Product A", 100.0, 5);
    Administrator product112("Product B", 150.0, 10);
    Administrator product113("Product C", 200.0, 15);

    // Створення об'єкта Store з трьома продуктами
    Store store(product111, product112, product113);

    // Демонстрація продуктів у магазині
    store.displayProducts();
    // 3.12. Агрегація
    Customer order1;
    order1.addProduct(product1);
    order1.addProduct(product2);
    order1.addProduct(product3);

    // 3.13. Композиція
    Customer order2({ *product4 }); // 3.13. Створення з масиву

    // Відображення замовлень
    std::cout << "Order 1:" << std::endl;
    order1.displayOrder();

    std::cout << "\nOrder 2:" << std::endl;
    order2.displayOrder();

    // 2.12. Використання статичних методів
    std::cout << "Total products created: " << Administrator::getTotalProducts() << std::endl;

    // 2.13. Виклик функції для обчислення знижки
    calculateDiscount(product1, 10.0);
    calculateDiscount(product4, 15.0);
    // 4.1. Використання класів FoodProduct та Electronics
    FoodProduct foodProduct1("Apple", 0.50, 100, "2024-12-31", "Apples", true, 52, "FruitBrand");
    Electronics electronicsProduct1("Smartphone", 699.99, 20, "BrandX", "ModelY");

    std::cout << "\n";
    foodProduct1.displayInfo(); // Відображення інформації про продукт харчування

    std::cout << "\n";
    electronicsProduct1.displayInfo(); // Відображення інформації про електроніку
    // 4.2
    std::cout << "\n";
    Customer customer;
    customer.addProduct(product1);
    customer.addProduct(product2);

    // Показати деталі базового класу
    customer.showBaseClassDetails();

    // Відображення замовлення
    customer.displayOrder();
    // 4.3
    InventoryManager manager("Product 2", 150.0, 5, 1);
    manager.displayProductInfo(); // Відображення інформації про товар

    // 4.4
    SmartDevice smartDevice("Smartphone", 999.99, 10, "BrandX", "ModelY", 2, "Stereo");
    smartDevice.displayInfo();
    // Звільнення пам'яті
    // 4.6
    Electronics electronics("Gphone", 999.99, 50, "BrandG", "ModelZXS");

    std::cout << "Customer Info:\n";
    electronics.showBaseClassDetails();
    delete product4;

  Application::EnableVisualStyles();
  Application::SetCompatibleTextRenderingDefault(false);

  Application::Run(gcnew StoreManagementApp::MainForm());
  return 0;
}