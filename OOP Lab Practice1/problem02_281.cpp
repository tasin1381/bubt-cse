#include <bits/stdc++.h>
using namespace std ;

/* Practice Question 2 — Bank Account Security
A bank wants to maintain customer account information securely. Create a class named
BankAccount containing private data members accountNumber, accountHolder, and
balance.
Create setter and getter functions to manage the account information. The setter

function for balance should check whether the given balance is non-negative before as-
signing it.

In main(), create an account object, assign sample information and display the ac-
count details using getter functions.

Concepts: Encapsulation, Data Protection, Setter/Getter, Data Validation */

class BankAccount {

private:

    int accountNumber;
    string accountHolder;
    double balance;

public:

    void setAccountNumber(int accountNumber){

    this-> accountNumber = accountNumber;
    }

    void setAccountHolder(string accountHolder){

    this-> accountHolder = accountHolder;
    }

    void setBalance(double balance){

        if (balance >= 0){
        this-> balance = balance;

        }
        else
        {
            cout << "Invalid Balance!" << endl;
        }
    }

    int getAccountNumber(){

    return accountNumber;
    }

    string getAccountHolder(){

    return accountHolder;
    }

    double getBalance(){

    return balance;
    }

    void show(){

    cout << "Account Number : " << accountNumber << endl;
    cout << "Account Holder : " << accountHolder << endl;
    cout << "Account Balance: " << balance << endl;

    }
};

int main(){

    BankAccount b1;

    b1.setAccountNumber(101);
    b1.setAccountHolder("Zahid Bin Azam");
    b1.setBalance(5000);
    b1.show() ;

    return 0;
}
