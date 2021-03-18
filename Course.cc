#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "Course.h"

Course::Course(int c, int g, int t, string i)
{
  code  = c;
  grade = g;
  term = t;
  instructor = i;
}

void Course::print()
{
  string str;
  //prints out the data members of the student
  cout << "Course Code: COMP " << code << "  ";
  cout << left << "Term: " << setw(10) << term << "  ";
  cout << left << "Instructor: " << setw(20) << instructor << "  ";
  cout << right << setw(2) << grade   << "  ";
  getGradeStr(str);
  cout << left << setw(3) << str << endl;

}

void Course::getGradeStr(string& gradeStr)
{
  string gradeStrings[] = {
    "WDN", "F", "D-", "D", "D+", "C-", "C", "C+",
    "B-", "B", "B+", "A-", "A", "A+" };

  if ( grade >= -1 && grade <= 12 )
    gradeStr = gradeStrings[grade+1];
  else
    gradeStr = "Unknown";
}

bool Course::lessThan(Course* c){
  //compare given parameter with Course object on which function is called
  if(code > c->code){
    return true;
  }
  else if(code == c->code){
    if(term > c->term){
      return true;
    }
    return false;
  }
  return false;
}

int Course::getGrade(){
  return grade;
}
