#include <bits/stdc++.h>
using namespace std ;
/*Practice Question 4 — Smartphone Operations
A mobile company develops different types of smartphones. Create an abstract base class
named Smartphone containing two pure virtual functions:
• takeSelfie()
• makeCall()
Create two derived classes named Android and IPhone. Implement both functions
separately in each derived class and display suitable messages for each smartphone.
In main(), create base-class pointers and dynamically create objects of Android and
IPhone using new. Call their functions through the pointers using the -> operator and
finally release the allocated memory using delete.
Concepts: Abstraction, Abstract Class, Pure Virtual Function, Inheritance, Object
Pointer, Runtime Polymorphism, new, delete */

class Smartphone {
public:

    virtual void takeSelfie() = 0;
    virtual void makeCall() = 0;

    virtual ~Smartphone() {}
};

class Android : public Smartphone {
public:

    void takeSelfie() {
        cout << "Android is taking a selfie." << endl;
    }

    void makeCall(){

    cout << "Android is making a call." << endl;
    }
};

class IPhone : public Smartphone {
public:

    void takeSelfie(){

    cout << "IPhone is taking a selfie." << endl;
    }

    void makeCall() {

    cout << "IPhone is making a call." << endl;
    }
};

int main() {
    Smartphone *ptr1 = new Android();
    Smartphone *ptr2 = new IPhone();

    ptr1->takeSelfie();
    ptr1->makeCall();

    ptr2->takeSelfie();
    ptr2->makeCall();

    delete ptr1;
    delete ptr2;

    return 0;
}
