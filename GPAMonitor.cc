#include <iostream>
using namespace std;
#include <string>
#include <vector>

#include "GPAMonitor.h"


GPAMonitor::GPAMonitor(float t)
{
  threshold = t;
  logs.push_back("GPAMonitor: ");
}

void GPAMonitor::update(Student* stu)
{
  if((stu->computeGPA() < threshold) && (stu->computeGPA() > -1)){
    string logString = "Student ID: " + to_string(stu->getID()) + " GPA: " + to_string(stu->computeGPA());
    logs.push_back(logString);
  }
}
