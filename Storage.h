#ifndef STORAGE_H
#define STORAGE_H

#include "defs.h"
#include "Student.h"

/*

The Storage class will contain all the student information stored in the program.
The Storage class will contain the following:
 - a collection of students represented as an array of Student pointers
 - the number of students currently in storage
 - a constructor
 - a destructor to clean up the dynamically allocated Student objects
 - an operator+=(Student*) operator function that adds a new student to the back of the array
 - a print() member function that prints out all the student information to the screen;

*/

class Storage
{
  public:
    Storage();
    ~Storage();
    void print();
    Storage& operator+=(Student*);

  private:
    Student* students[MAX_NUM_STU]; //a collection of students represented as an array of Student pointers
    int    numStudents; //the number of students currently in storage
};

#endif
