#include <bits/stdc++.h>
using namespace std ;

/*Practice Question 11 — Online Payment System (Abstraction + Inheritance)
An e-commerce company wants to develop a payment system that supports different
payment methods.
Create an abstract class named Payment containing a pure virtual function named
processPayment().
Create two derived classes named CreditCardPayment and MobileBankingPayment.

Both classes must implement the processPayment() function and display suitable mes-
sages indicating how the payment is processed.

In main(), declare a base-class pointer and dynamically create objects of both derived
classes using new. Call the processPayment() function through the base-class pointer
using the -> operator. Finally, release the dynamically allocated memory using delete.
Concepts: Abstraction, Abstract Class, Pure Virtual Function, Inheritance, Runtime
Polymorphism, Object Pointer, new, delete */

class Payment{
public :

    virtual void processPayment() = 0 ;

    virtual ~Payment(){

    }
};


class CreditCardPayment : public Payment{
public :

    void processPayment() override{

    cout << "Payment processed using Credit Card." << endl ;
    }
};


class MobileBankingPayment : public Payment{
public :

    void processPayment() override{

    cout << "Payment processed using Mobile Banking." << endl ;
    }
};

int main(){

    Payment *ptr1 = new CreditCardPayment() ;
    Payment *ptr2 = new MobileBankingPayment() ;

    ptr1 -> processPayment() ;
    ptr2 -> processPayment() ;

    delete ptr1 ;
    delete ptr2 ;

    return 0 ;
}
