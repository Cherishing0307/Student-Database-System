#ifndef FWMONITOR_H
#define FWMONITOR_H
#include <string>
#include <vector>

#include "Monitor.h"
#include "Student.h"

/*

The FWMonitor class is a concrete class that derives from the Monitor class.
The FWMonitor class will contain the following:
 - a data member that represents the threshold for flagging a student's number of FW courses
 - a constructor
 - an implementation of the update() function that checks if the given student's number of
    FW courses is greater than the threshold

*/

class FWMonitor : public Monitor
{
  public:
    FWMonitor(int=0);
    virtual void update(Student*);

  private:
    int threshold;

};

#endif
