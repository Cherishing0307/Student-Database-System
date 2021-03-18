#ifndef MONITOR_H
#define MONITOR_H

#include <string>
#include <vector>
using namespace std;

#include "Student.h"

/*

The Monitor class is an abstract that serves as the base class for the observers in the Observer
design pattern.
The Monitor class will contain the following:
 - a data member that stores a collection of logs
 - a pure virtual update() function
 - a printLogs() member function that prints the collection of logs to the screen

*/

class Monitor
{
  public:
    Monitor();
    virtual void update(Student*) = 0;
    void printLogs();

  protected:
    vector<string> logs;
};

#endif
