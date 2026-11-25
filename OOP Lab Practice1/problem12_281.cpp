#include <bits/stdc++.h>
using namespace std ;
/*Practice Question 12 — University Course Management System (Complete OOP Practice)
A university wants to develop a Course Management System using encapsulation, inher-
itance and abstraction.
Create an abstract base class named Course containing the following private data
members:
• int courseId • string courseName
Create setter and getter functions to assign and retrieve the course information. Also
declare a pure virtual function named displayCourseType().
Create two derived classes named TheoryCourse and LabCourse that publicly inherit
from Course.
The TheoryCourse class should implement displayCourseType() to display “This
is a Theory Course”.
The LabCourse class should implement displayCourseType() to display “This is a
Lab Course”.
In main():
1. Declare a base-class pointer.
2. Dynamically create a TheoryCourse object using new and assign course information.
3. Display the course information using getter functions.
4. Call displayCourseType() through the base-class pointer.
5. Repeat the same process for a LabCourse object.
6. Release the dynamically allocated objects using delete.

Concepts: Encapsulation, Abstraction, Inheritance, Abstract Class, Pure Virtual Func-
tion, Setter/Getter, Object Pointer, Runtime Polymorphism, new, delete */

class Course{
private :

    int courseId ;
    string courseName ;

public :

    void setCourseId(int id){

    courseId = id ;
    }

    void setCourseName(string name){

    courseName = name ;
    }

    int getCourseId(){

    return courseId ;
    }

    string getCourseName(){

    return courseName ;
    }

    virtual void displayCourseType() = 0 ;

     void show(){

    cout << "Course ID  :" << courseId << endl;
    cout << "Course Name:" << courseName << endl;
    }
};


class TheoryCourse : public Course{
public :

    void displayCourseType() override{

    cout << "This is a Theory Course" << endl ;
    }
};


class LabCourse : public Course{
public :

    void displayCourseType() override{

    cout << "This is a Lab Course" << endl ;
    }
};

int main(){

    Course *ptr1 = new TheoryCourse() ;
    Course *ptr2 = new LabCourse() ;

    ptr1 -> setCourseId(101) ;
    ptr1 -> setCourseName("Object Oriented Programming") ;

    ptr1 -> displayCourseType() ;
    ptr1 ->show();

    cout << endl;

    ptr2 -> setCourseId(102) ;
    ptr2 -> setCourseName("OOP Lab") ;

    ptr2 -> displayCourseType() ;
    ptr2 ->show();


    delete ptr1 ;
    delete ptr2 ;

    return 0 ;
}
