#ifndef VIEW_H
#define VIEW_H

#include <string>
using namespace std;

#include "Storage.h"

/*

The View class will be responsible for interacting with the user.
The View class will contain the following:
 - a mainMenu() member function for displaying the main menu and reading the user's selection
 - a studentIDData() member function for reading the student ID
 - a courseData() member function for reading all the information from the user about one course
 - a print() member function for printing out the storage

*/
class View
{
  public:
    View();
    void mainMenu(int&);
    void courseData(int &, int &, int &, string &);
    void studentIDData(int&);
    void print(Storage&);
};

#endif
