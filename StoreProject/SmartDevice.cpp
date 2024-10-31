#include "pch.h"       
#include "SmartDevice.h"
#include <iostream>

void SmartDevice::displayInfo() const {
    Electronics::displayInfo(); // ������ ������ �������� ����� Electronics
    std::cout << "Additional Feature: " << additionalFeature << std::endl;
}
SmartDevice::~SmartDevice() {
    std::cout << "SmartDevice Destructor: " << additionalFeature << std::endl;
}