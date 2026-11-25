#include <bits/stdc++.h>
using namespace std ;

/* Practice Question 8 — Vehicle Information System (Hierarchical Inheritance)
A transportation company maintains information about different types of vehicles. Create
a base class named Vehicle containing a function displayVehicleInfo().
Create two derived classes named Car and Bus, both publicly inheriting from Vehicle.
The Car class should contain a function carInfo() to display the car’s brand and
number of doors.
The Bus class should contain a function busInfo() to display the bus’s route number
and passenger capacity.
In main(), create separate objects of Car and Bus. Call the inherited function and
their respective functions to display the information.
Concepts: Hierarchical Inheritance, Base Class, Multiple Derived Classes */

class Vehicle{
public:

    void displayVehicleInfo(){

    cout << "Vehicle Information" << endl;
    }
};

class Car : public Vehicle{
public:

    void carInfo(){

    cout << "Car Brand: Toyota" << endl;
    cout << "Number of Doors: 4" << endl;
    }
};

class Bus : public Vehicle{
public:
    void busInfo(){

    cout << "Route Number: 101" << endl;
    cout << "Passenger Capacity: 50" << endl;
    }
};

int main() {
    Car c1;
    Bus b1;

    c1.displayVehicleInfo();
    c1.carInfo();

    cout << endl;

    b1.displayVehicleInfo();
    b1.busInfo();

    return 0;
}
