#include <iostream>
#include <iomanip>
using namespace std;

#include "View.h"

View::View()
{

}

void View::mainMenu(int& selection){
  //main menu for the user
  int numOptions = 1;
  selection  = -1;

  cout << endl;
  cout << "(1) Add student" << endl;
  cout << "(0) Exit" << endl;

  while (selection < 0 || selection > numOptions) {
    cout << "Enter your selection: ";
    cin  >> selection;
  }
}

void View::courseData(int &courseCode, int &grade, int &term, string &instructor){
    //course information is set
    cout << "Course Code <0 to end>:  ";
    cin  >> courseCode;
    if(courseCode!=0){
      cout << "Grade:                   ";
      cin  >> grade;

      cout << "Term:                   ";
      cin >> term;

      cout << "Instructor:                   ";
      cin.ignore();
      getline(cin, instructor);
    }
}

void View::studentIDData(int &stuId){
  //student ID information is set
  cout << "student id:   ";
  cin  >> stuId;
}
void View::print(Storage &s)
{
  //prints the storage
  s.print();
}
