#include <iostream>
#include <iomanip>
using namespace std;

#include "Control.h"

Control::Control()
{
  GPAMonitor* gpa = new GPAMonitor(3.0);
  monitors.push_back(gpa);
  FWMonitor* fw = new FWMonitor(2);
  monitors.push_back(fw);
  vector<string> cloudStudents;
  server.retrieve(cloudStudents);

  int id, courseCode, grade, term;
  string instructor;
  stringstream ss;
  for(int i=0; i<cloudStudents.size(); ++i){
    ss.clear();
    ss.str(cloudStudents[i]);
    ss >> id;
    Student* s = new Student(id);
    while(1){
      ss >> courseCode;
      if(courseCode == 0)
        break;
      ss >> term >> grade >> instructor;
      Course* c = new Course(courseCode, grade,term, instructor);
      *s+=(c);
    }
    students+=(s);
    notify(s);
  }
}

Control::~Control(){
  for(int i=0; i<monitors.size(); ++i){
    monitors[i]->printLogs();
    cout << endl;
    delete monitors[i];
  }
}

void Control::launch(){
  //initialize attributes
  int    stuId, courseCode, grade, term;
  string instructor;
  int    menuSelection;
  while(1){
    //initialize menu selection and print the storage
    v.mainMenu(menuSelection);
    if(menuSelection == 0)
      break;
    else if (menuSelection == 1){
      //initialize student with ID and add to storage
      v.studentIDData(stuId);
      Student* s = new Student(stuId);
      while(1){
        //initialize courses and add student
        v.courseData(courseCode, grade,term, instructor);
        if(courseCode == 0)
          break;
        Course* c = new Course(courseCode, grade,term, instructor);
        *s+=(c);
      }
      students+=(s);
      notify(s);
    }
  }
  students.print();
}

void Control::notify(Student* newStu){
  for(int i=0; i<monitors.size(); ++i){
    monitors[i]->update(newStu);
  }
}
