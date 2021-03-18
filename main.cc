#include <iostream>
using namespace std;
#include <string>

#include "Control.h"

/*

COMP 2404 Assignment #4
Rishiheishan Parameswaran
101044151

Revision #1 Author Name: Christine Laurendeau
Revision #1 Date: 03/2019

Revision #2 Author Name: Rishiheishan Parameswaran
Revision #2 Date: 04/2019

Purpose: Creating the foundation of a system for adding entities of students
and their courses in a university. The final system would allow administrators to
view student grades for particular courses and terms. We also use monitors to keep
record of students who have a low GPA or who have failed courses.

Compilation:
make

Launch:
./a4

Operation:
To use included in.txt file, launch:
./a4 < in.txt
Otherwise, when prompted enter either 0 or 1, and enter the appropriate data when prompted

To clean:
make clean

To check for memory leaks:
valgrind ./a4 < in.txt

*/

int main()
{
  Control c;
  c.launch();
}
