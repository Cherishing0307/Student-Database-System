#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "Student.h"

Student::Student(int i)
{
  id = i;
}

Student::~Student(){

}

void Student::print()
{
  cout << endl << "ID: " << id << endl;
  cout << "GPA: " << computeGPA() << endl;
  courses.print();//prints the courses of the student
}

Student& Student::operator+=(Course* c){
  courses.add(c);//adds the courses for the student
}

float Student::computeGPA(){
  return courses.computeGPA();//returns GPA for student
}

int Student::computeNumFW(){
  return courses.computeNumFW();//returns number of FW courses for student
}

int Student::getID(){
  return id;
}
