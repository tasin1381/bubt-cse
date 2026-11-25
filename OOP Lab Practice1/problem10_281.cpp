#include <bits/stdc++.h>
using namespace std ;

/* Practice Question 10 — Employee Department System (Encapsulation + Single Inheritance)
A company wants to develop an Employee Department Management System. Create a
base class named Person containing the following private data members:
• string name
• int age
Create setter and getter functions to manage these private data members.
Create a derived class named Employee that publicly inherits from Person. The
Employee class should contain two additional private data members: employeeId and
salary.
Create appropriate setter and getter functions for the employee information. Use the
inherited getter functions to retrieve the person’s information.
In main(), create an Employee object, assign sample information and display the
complete employee details.
Concepts: Encapsulation, Setter/Getter, Single Inheritance, Private Data Members,
Code Reusability */

class Person{
private :

   string name ;
   int age ;

public :

   void setName(string name){

   this ->name =name ;
   }

   void setAge(int age){

   this ->age = age ;
   }

   string getName(){

   return name ;
   }

   int getAge(){

   return age ;
   }

   void show(){

   cout << "Name :" << name << endl;
   cout << "Age  :" << age << endl;
   }
};

class Employee : public Person {
private :

    string employeeId ;
    double salary ;

public :


    void setId(string employeeId){

    this ->employeeId=employeeId ;
    }

    void setSalary(double salary){

    this->salary=salary ;
    }

    string getId (){

    return employeeId ;
    }

    double getSalary (){

    return salary ;
    }

    void display(){

    show() ;
    cout << "Employee ID :" << employeeId << endl;
    cout << "Salary      :" << salary << endl;

    }

};
int main(){

Employee e1;
e1.setName("Tasin");
e1.setAge(20);
e1.setId("20262103281");
e1.setSalary(2000);
e1.display();

return 0;

}
