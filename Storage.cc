#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "Storage.h"

Storage::Storage()
{
  numStudents = 0;

}

Storage::~Storage(){
  for(int i = 0; i < numStudents; i++){
    delete(students[i]);//delete students[i], cleans up the dynamically allocated Student object
  }
}

void Storage::print()
{
  for (int i=0; i<numStudents; ++i)
    students[i]->print();//prints students[i] information to the screen
}

Storage& Storage::operator+=(Student* s){
  if((numStudents+1) < MAX_NUM_STU){
    students[numStudents] = s;//adds student to the back of the array
    numStudents++;
  }
}
