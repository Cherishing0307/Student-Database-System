#ifndef COURSE_H
#define COURSE_H
#include <string>
using namespace std;
/*

The Course class will allow users to  allocate Course objects dynamically
instead of statically.
The Course class will contain the following:
 - four data members that represent the course code, grade, term and instructor name
 - a constructor that initializes the data members
 - print() function that prints out the data members
 - getGradeStr(string&) function that converts a number grade to a letter grade
   according to Carleton's CGPA grading system
 - lessThan(Course*) function that will compare the given parameter with the Course object
 - getGrade() getter function for grade

*/

class Course
{
  public:
    Course(int=0, int=0, int=0, string ="Unknown");
    void print();
    bool lessThan(Course*);
    int getGrade();

  private:
    int code;	// course code, for example 2404 for COMP2404
    int grade;	// numeric grade from 0 (F) to 12 (A+), with -1 for WDN
    int term; //term when course was taken in CU format YYYYTT
    string instructor; //name of the course instructor for the term

    void getGradeStr(string&);
};

#endif
