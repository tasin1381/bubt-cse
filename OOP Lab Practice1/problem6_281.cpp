#include <bits/stdc++.h>
using namespace std ;
/* Practice Question 6 — Amphibious Vehicle System (Multiple
Inheritance) A vehicle manufacturing company produces vehicles that can travel both on land and water. 
Design a C++ program using multiple inheritance.
Create two base classes named LandVehicle and WaterVehicle.
LandVehicle should contain a function named landInfo() that displays information
about land transportation.
WaterVehicle should contain a function named waterInfo() that displays informa-
tion about water transportation.
Create a derived class named AmphibiousVehicle that publicly inherits from both
base classes. Add a function named displayVehicleType() to identify the vehicle.
In main(), create an AmphibiousVehicle object and call all three functions.
Concepts: Multiple Inheritance, Base Classes, Derived Class, Code Reusability */

class LandVehicle {
public :

    void landInfo(){

    cout << "LandVehicle Called!" << endl ;
    }
};
class WaterVehicle {
public :

    void waterInfo(){

    cout << "WaterVehicle Called!" << endl;
    }
};
class  AmphibiousVehicle : public LandVehicle, public WaterVehicle{
public :

    void displayVehicleType(){

    cout << "AmphibiousVehicle Called!" << endl;
    }

};
int main(){

AmphibiousVehicle v1 ;
v1.displayVehicleType();
v1.waterInfo();
v1.landInfo();

return 0;

}
