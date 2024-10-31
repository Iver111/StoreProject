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
    Administrator productDefault; // 3.8 �������
    Administrator productExplicit("Banana", 0.75, 50); // 3.8 �����
    Administrator productCompact{ "Orange", 1.2, 30 }; // 3.8 ����������


    // 2.8. ��������� ��'����
    Administrator product1("Product 1", 100.0, 10); // 2.8. ������ ���������
    Administrator product2("Product 2", 150.0, 5); // 2.8. ������ ���������
    Administrator product3 = createSampleProduct(); // 2.8. ������������ ������� ��� ��������� ��'����

    // 3.9. �������� � �������� ��������� ��'����
    Administrator* product4 = new Administrator("Product 4", 200.0, 20); // 3.9. �������� ���������
    product3.updateQuantity(5); // ��������� �������
    // 3.10. ������������ ��� ������������
    productDefault.display();
    // 3.10.1. ����������� � �����������
    Administrator productParam("Product A", 100.0, 5); // ������ ����������������� ������������
    productParam.display();

    // 3.10.3. ����������� �����������
    Administrator productCopy = productParam; // ������ ������������ ������������
    productCopy.display();

    // 3.10.4. ����������� � �������������� �������
    Administrator productInitList("Product B", 250.0, 15); // ������ ������������ � �������������� �������
    productInitList.display();

    // 3.11
    Administrator product111("Product A", 100.0, 5);
    Administrator product112("Product B", 150.0, 10);
    Administrator product113("Product C", 200.0, 15);

    // ��������� ��'���� Store � ������ ����������
    Store store(product111, product112, product113);

    // ������������ �������� � �������
    store.displayProducts();
    // 3.12. ���������
    Customer order1;
    order1.addProduct(product1);
    order1.addProduct(product2);
    order1.addProduct(product3);

    // 3.13. ����������
    Customer order2({ *product4 }); // 3.13. ��������� � ������

    // ³���������� ���������
    std::cout << "Order 1:" << std::endl;
    order1.displayOrder();

    std::cout << "\nOrder 2:" << std::endl;
    order2.displayOrder();

    // 2.12. ������������ ��������� ������
    std::cout << "Total products created: " << Administrator::getTotalProducts() << std::endl;

    // 2.13. ������ ������� ��� ���������� ������
    calculateDiscount(product1, 10.0);
    calculateDiscount(product4, 15.0);
    // 4.1. ������������ ����� FoodProduct �� Electronics
    FoodProduct foodProduct1("Apple", 0.50, 100, "2024-12-31", "Apples", true, 52, "FruitBrand");
    Electronics electronicsProduct1("Smartphone", 699.99, 20, "BrandX", "ModelY");

    std::cout << "\n";
    foodProduct1.displayInfo(); // ³���������� ���������� ��� ������� ����������

    std::cout << "\n";
    electronicsProduct1.displayInfo(); // ³���������� ���������� ��� ����������
    // 4.2
    std::cout << "\n";
    Customer customer;
    customer.addProduct(product1);
    customer.addProduct(product2);

    // �������� ����� �������� �����
    customer.showBaseClassDetails();

    // ³���������� ����������
    customer.displayOrder();
    // 4.3
    InventoryManager manager("Product 2", 150.0, 5, 1);
    manager.displayProductInfo(); // ³���������� ���������� ��� �����

    // 4.4
    SmartDevice smartDevice("Smartphone", 999.99, 10, "BrandX", "ModelY", 2, "Stereo");
    smartDevice.displayInfo();
    // ��������� ���'��
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