#include <iostream>
using namespace std;
#include <string>
#include <vector>

#include "FWMonitor.h"


FWMonitor::FWMonitor(int t)
{
  threshold = t;
  logs.push_back("FWMonitor: ");
}

void FWMonitor::update(Student* stu)
{
  if((stu->computeNumFW() > threshold) && (stu->computeGPA() > -1))
  {
    string logString = "Student ID: " + to_string(stu->getID()) + " Failed: " + to_string(stu->computeNumFW());
    logs.push_back(logString);
  }
}
