#include <bits/stdc++.h>
using namespace std ;
/*Practice Question 7 — University Academic Structure (Multi-level Inheritance)
A university wants to represent its academic structure using multilevel inheritance.
Create a base class University containing a function universityInfo() that dis-
plays the university name.
Create a derived class Department that inherits from University and contains a
function departmentInfo() to display the department name.
Create another derived class Student that inherits from Department and contains a
function studentInfo() to display student information, including student ID and name.
In main(), create a Student object and call all three functions to display the complete
information.
Concepts: Multilevel Inheritance, Base Class, Derived Class, Code Reusability */

class University{
public :

    void univerisityInfo(){

    cout << "BUBT" << endl;
    }
};
class Department : public University{
public:

    void  departmentInfo(){

    cout << "Department Of CSE" << endl;
    }
};
class Student : public Department{
public :

    string name ;
    int id;

    void studentInfo(){

    cout << "Student Name :" << name << endl;
    cout << "Student ID   :" << id << endl;
    }

};
int main(){

Student s1;
s1.name = "Tasin";
s1.id = 281 ;
s1.univerisityInfo();
s1.departmentInfo();
s1.studentInfo();

return 0;

}
