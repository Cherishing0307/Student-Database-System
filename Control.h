#ifndef CONTROL_H
#define CONTROL_H

#include <string>
using namespace std;

#include "Course.h"
#include "Student.h"
#include "Storage.h"
#include "View.h"
#include "Monitor.h"
#include "GPAMonitor.h"
#include "FWMonitor.h"
#include "StuServer.h"


/*

The Control class will implement the control flow from the main() function.
The Control class will contain the following:
 - a data member for the Storage object
 - a data member for the StuServer object
 - a data member for a new View object that will be responsible for user I/O
 - a data member to store a collection of Monitor object pointers
 - a launch() member function that implements the program control flow
 - a notify(Student* newStu) member function to notify the monitor objects when a new student is
    created

*/

class Control
{
  public:
    Control();
    ~Control();
    void launch();
    void notify(Student* newStu);

  private:
    Storage students;
    StuServer server;
    View v;
    vector<Monitor*> monitors;
};

#endif
