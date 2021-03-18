#include <iostream>
using namespace std;
#include <string>

#include "CourseList.h"

CourseList::CourseList() : head(0), tail(0) { }

CourseList::~CourseList()
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

void CourseList::add(Course* c)
{
  Node* tmpNode;
  Node* currNode;
  Node* prevNode;

  tmpNode = new Node;
  tmpNode->data = c;
  tmpNode->next = 0;

  currNode = head;
  prevNode = NULL;

  while (currNode != NULL) {
    if (c->lessThan(currNode->data))
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

}

void CourseList::print()
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

float CourseList::computeGPA(){
  float gpa = 0; //current GPA float initialized
  int courses = 0; //amount of courses float initialized
  Node* currNode = head;
  while(currNode != NULL){
    if(currNode->data->getGrade() != -1){
      gpa = gpa + currNode->data->getGrade();//grade is added
      courses++;
  }
    currNode = currNode->next;
  }
  if(courses == 0 && gpa == 0)//if empty
    return -1;
  gpa = gpa/courses;
  return gpa;
}

int CourseList::computeNumFW(){
  int courses = 0;//amount of courses failed
  Node* currNode = head;
  while(currNode != NULL){
    if((currNode->data->getGrade()) < 1)//if course is failed
      courses++;
    currNode = currNode->next;
  }
  if(head)
    return courses;
  return -1;
}
