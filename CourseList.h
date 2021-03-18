#ifndef COURSELIST_H
#define COURSELIST_H

#include "Course.h"

/*

The CourseList class will hold a singly linked list of Course pointers.
The CourseList class will contain the following:
 - a data member for the head of the list
 - a data member for the tail of the list
 - a constructor
 - a destructor to clean up the dynamically allocated memory
 - an add(Course*) member function that adds a new course to the list
 - a print() member function that prints the courses to the screen
 - a computeGPA() member function that returns the average of all course grades for the student
 - a computeNumFW() member function that returns the number of courses that the student failed or withdrawn from

*/

class CourseList
{
  class Node
  {
    friend class CourseList;
    private:
      Course* data;
      Node*   next;
  };

  public:
    CourseList();
    ~CourseList();
    void add(Course*);
    void print();
    float computeGPA();
    int computeNumFW();

  private:
    Node* head;
    Node* tail;
};

#endif
