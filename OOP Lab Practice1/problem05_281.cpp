#include <bits/stdc++.h>
using namespace std ;

/*A company maintains information about its employees. Create a base class named Person
containing the data members name and age, along with a function named displayPersonInfo().
Create a derived class named Employee that publicly inherits from Person. Add two
additional data members: employeeId and salary.
Create a function named displayEmployeeInfo() to display the employee-specific
information along with the inherited person information.
In main(), create an Employee object, assign sample values and display the complete
employee information.
Concepts: Single Inheritance, Base Class, Derived Class, Code Reusability */

class Person{
public :

    string name ;
    int age ;

     void displayPersonInfo() {

     cout << "Name  :" << name << endl;
     cout << "Age   :" << age << endl;
     }
};
class Employee : public Person{
public :

    int employeeId ;
    double salary ;

    void displayEmployeeInfo(){

    cout << "Employee ID :" << employeeId << endl;
    cout << "Employee Salary :" << salary << endl;
    displayPersonInfo();

    }
};

int main(){
  
Employee e1 ;
e1.name = "Tasin";
e1.age = 20;
e1.employeeId = 20262103 ;
e1.salary = 2000 ;
e1.displayEmployeeInfo() ;

return 0;

}
