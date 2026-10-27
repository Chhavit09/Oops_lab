#include <iostream>
using namespace std;

// 1. Common Base Class
class Vehicle {
public:
    Vehicle() {
        cout << "Vehicle constructor called." << endl;
    }
    
    void startEngine() {
        cout << "Engine started." << endl;
    }
};

// 2. Intermediate Class 1 (Virtual Inheritance)
class GasCar : virtual public Vehicle {
public:
    GasCar() {
        cout << "GasCar constructor called." << endl;
    }
    
    void refuel() {
        cout << "Pumping petrol." << endl;
    }
};

// 3. Intermediate Class 2 (Virtual Inheritance)
class ElectricCar : virtual public Vehicle {
public:
    ElectricCar() {
        cout << "ElectricCar constructor called." << endl;
    }
    
    void recharge() {
        cout << "Charging battery." << endl;
    }
};

// 4. Final Derived Class
// Because of 'virtual' in the parent classes, only ONE instance of Vehicle is created.
class HybridCar : public GasCar, public ElectricCar {
public:
    HybridCar() {
        cout << "HybridCar constructor called." << endl;
    }
    
    void switchMode() {
        cout << "Switching driving mode." << endl;
    }
};

int main() {
    cout << "--- Creating HybridCar Object ---" << endl;
    HybridCar myCar;
    
    cout << "\n--- Accessing Methods ---" << endl;
    // This call is no longer ambiguous. It perfectly resolves to the single shared Vehicle instance.
    myCar.startEngine(); 
    
    // Accessing methods from intermediate classes
    myCar.refuel();
    myCar.recharge();
    myCar.switchMode();

    return 0;
}