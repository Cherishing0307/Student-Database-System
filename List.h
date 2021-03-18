#ifndef LIST_H
#define LIST_H

#include <iostream>
#include <iomanip>

#include "Course.h"
#include "Student.h"
using namespace std;

/*

The List class will be a class template, and the data will no longer be assumed to be a pointer
The List class will contain the following:
 - a data member for the head of the list
 - a data member for the tail of the list
 - a constructor
 - a destructor to clean up the dynamically allocated memory
 - an operator+=(Course*) operator function that adds a new course to the list
 - a print() member function that prints the courses to the screen

*/

template <class T>
class List
{
  class Node
  {
    friend class List<T>;
    private:
      T data;
      Node* next;
  };

  public:
    List();
    ~List();
    List<T>& operator+=(T);
    void print();

  private:
    Node* head;
    Node* tail;
};

template <class T>
List<T>::List() : head(0), tail(0) { }

template <class T>
List<T>::~List()
{
  Node* currNode = head;
  Node* nextNode;

  while (currNode != NULL) {
    nextNode = currNode->next;
    delete currNode->data;
    delete currNode;
    currNode = nextNode;
  }
}

template <class T>
List<T>& List<T>::operator+=(T c)
{
  Node* tmpNode;
  Node* currNode;
  Node* prevNode;

  tmpNode = new Node();
  tmpNode->data = c;
  tmpNode->next = 0;

  currNode = head;
  prevNode = NULL;

  while (currNode != NULL) {
    if (*c<(currNode->data))
      break;
    prevNode = currNode;
    currNode = currNode->next;
  }

  if (prevNode == NULL) {
    head = tmpNode;
  }
  else {
    prevNode->next = tmpNode;
  }

  //set the tail
  if(currNode==NULL){
    tail = tmpNode;
  }
  tmpNode->next  = currNode;
  return *this;
}

template <class T>
void List<T>::print()
{
  Node* currNode = head;
  cout << endl;

  //prints the courses
  while (currNode != NULL) {
    currNode->data->print();
    currNode = currNode->next;
  }

  //prints the head and tail
  cout << endl;
  if(head){
    cout << "Head:" << "  ";
    head->data->print();
  }
  if(tail){
    cout << "Tail:" << "  ";
    tail->data->print();
  }
  cout << endl;
  return;
}

#endif
