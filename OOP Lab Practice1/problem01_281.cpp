#include <bits/stdc++.h>
using namespace std ;
/* Practice Question 1 — Student Information Management
A university wants to develop a Student Information Management System. Create a
C++ class named Student containing the following private data members:
• int studentId
• string studentName
• double cgpa
Create appropriate setter and getter functions to assign and retrieve the values of all
private data members. Use the this keyword inside the setter functions to distinguish
class data members from function parameters having the same names.

In main(), create a Student object, assign sample information and display the com-
plete student details using getter functions.

Concepts: Encapsulation, Private Data Members, Setter/Getter, this Keyword */
class Student {
private :

    int studentId ;
    string studentName ;
    double cgpa ;
sir give me 10 question and told me to upload in github ..i dont undertant how upload .like i have to create one folder then  ive to create file in that folder 
public :

    void setId (int studentId){

    this ->studentId = studentId ;
    }

    void setName ( string studentName){

    this ->studentName = studentName ;
    }

    void setCgpa (double cgpa){

    this ->cgpa = cgpa ;
    }

    int getId (){

    return studentId ;
    }

    string getName (){

    return studentName ;
    }

    double getCgpa (){

    return cgpa ;
    }

    void show (){

    cout << "Student ID   :" << studentId << endl;
    cout << "Student Name :" << studentName << endl;
    cout << "Student Cgpa :" << cgpa  << endl;

    }

};
int main (){

Student s1;
s1.setId (2026);
s1.setName ("Tasin");
s1.setCgpa (2.32);
s1.show();

return 0 ;

}

