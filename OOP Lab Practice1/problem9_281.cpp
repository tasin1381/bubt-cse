#include <iostream>
using namespace std;

/* Practice Question 9 — Transportation and Fare Management (Hybrid Inheritance)
A transportation company wants to manage different vehicle types and their fare infor-
mation using hybrid inheritance.
Create the following classes:
• Vehicle containing a function vehicleInfo().
• Fare containing a function fareInfo() to display the transportation fare.
• Car publicly inheriting from Vehicle and containing a function carInfo().
• Bus publicly inheriting from both Vehicle and Fare. Add a function busInfo() to
display bus information.
In main(), create objects of Car and Bus and demonstrate the inherited functions.
Concepts: Hybrid Inheritance, Multiple Inheritance, Hierarchical Inheritance */

class Vehicle{
public:

    void vehicleInfo(){

    cout << "Vehicle Information" << endl;
    }
};

class Fare{
public:

    void fareInfo(){

    cout << "Transportation Fare: 100 Tk" << endl;
    }
};

class Car : public Vehicle{
public:

    void carInfo(){

    cout << "Car: Toyota" << endl;
    }
};

class Bus : public Vehicle, public Fare{
public:

    void busInfo(){

    cout << "Bus: Green Line" << endl;
    }
};

int main(){
    Car c1;
    Bus b1;

    c1.vehicleInfo();
    c1.carInfo();
    cout << endl;
    b1.vehicleInfo();
    b1.fareInfo();
    b1.busInfo();

    return 0;
}
