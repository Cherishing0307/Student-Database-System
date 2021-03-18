#ifndef GPAMONITOR_H
#define GPAMONITOR_H
#include <string>
#include <vector>

#include "Monitor.h"
#include "Student.h"

/*

The GPAMonitor class is a concrete class that derives from the Monitor class.
The GPAMonitor class will contain the following:
 - a data member that represents the minimum threshold for GPAs to be flagged
 - a constructor
 - an implementation of the update() function that checks if the given student's GPA is below
    the minimum threshold

*/

class GPAMonitor : public Monitor
{
  public:
    GPAMonitor(float=0.0);
    virtual void update(Student*);

  private:
    float threshold;

};

#endif
