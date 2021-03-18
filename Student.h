#ifndef STUDENT_H
#define STUDENT_H

#include "defs.h"
#include "Course.h"
#include "CourseList.h"

/*

The Student class will work with dynamically allocated Course objects, instead of
statically allocated ones.
The Student class will contain the following:
 - a data member that represent the student's ID number
 - courses data member that holds a List of courses
 - a constructor that initializes the data members
 - a destructor to clean up the dynamically allocated Course objects
 - operator+=(Course*) operator function that adds a course to the back (the end) of the array
 - print() function to work with Course pointers instead of objects
 - computeGPA() function that returns the GPA for this student through List class
 - computeNumFW() function that returns the number of FW courses for this student through List class
 - getID() getter function for Student ID

*/


class Student
{
  public:
    Student(int=0);
    ~Student();
    void print();
    Student& operator+=(Course*);
    float computeGPA();
    int computeNumFW();
    int getID();

  private:
    int    id; //student ID number, for example 101044151
    CourseList courses; //courses data member that holds a primitive array of Course pointers
};

#endif
