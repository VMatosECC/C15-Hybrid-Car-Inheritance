// C15-Hybrid-Car-Inheritance.cpp 
/*
This code demonstrates how a HybridCar can utilize functionalities 
from both a traditional fuel-based car and an electric vehicle, 
showcasing the use of multiple inheritance in C++
*/
#include <iostream>

// Base class 1: Car
class Car {
public:
    void drive() {
        std::cout << "Car => Driving using fuel engine" << std::endl;
    }
};

// Base class 2: Electric Vehicle
class ElectricVehicle {
public:
    void chargeBattery() {
        std::cout << "eVe => Charging the electric battery" << std::endl;
    }
};

// Derived class: HybridCar inherits from both Car and ElectricVehicle
class HybridCar : public Car, public ElectricVehicle {
public:
    void hybridMode() {
        std::cout << "Hyb => Switching to hybrid mode" << std::endl;
    }
};

int main() {
    HybridCar myCar;

    myCar.drive();          // Inherited from Car
    myCar.chargeBattery();  // Inherited from ElectricVehicle
    myCar.hybridMode();     // Defined in HybridCar

    return 0;
}
