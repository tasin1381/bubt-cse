#include <bits/stdc++.h>
using namespace std ;

/* Practice Question 3 — Shape Area Calculator
A geometry application needs to calculate the areas of different shapes. Create an abstract
class named Shape containing a protected data member dimension and a pure virtual
function named calculateArea().
Create two derived classes named Square and Circle. Both classes must implement
the calculateArea() function using their respective formulas.
In main(), create objects of both derived classes, take the required dimensions as
input and display the calculated areas.
Concepts: Abstraction, Abstract Class, Pure Virtual Function, Inheritance */

class Shape {
protected:

    double dimension;

public:

    virtual void calculateArea() = 0;
};

class Square : public Shape{
public:

    void calculateArea(){

    cout << "Square Area: "<< dimension * dimension << endl;
    }

    void setDimension(double side){

    dimension = side;
    }
};

class Circle : public Shape{
public:

    void calculateArea() {

        cout << "Circle Area: "<< 3.1416 * dimension * dimension << endl;
    }

    void setDimension(double radius){

    dimension = radius;
    }
};

int main() {

    double side, radius;

    cout << "Enter square side: ";
    cin >> side;

    cout << "Enter circle radius: ";
    cin >> radius;

    Square s1;
    Circle c1;

    s1.setDimension(side);
    c1.setDimension(radius);

    s1.calculateArea();
    c1.calculateArea();

    return 0;
}
