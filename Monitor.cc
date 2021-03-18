#include <iostream>
#include <iomanip>
using namespace std;
#include <string>
#include <vector>

#include "Monitor.h"

Monitor::Monitor()
{
}

void Monitor::printLogs()
{
  for(int i=0; i < logs.size(); ++i){
    cout << logs[i] << endl;
  }
}
