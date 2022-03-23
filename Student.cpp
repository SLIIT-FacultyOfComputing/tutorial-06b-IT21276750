#include "Student.h"
#include <iostream>
#include <cstring>
using namespace std;

// Assign studentId and name
void Student::assignDetails(int stID, const char stName[20]) {
  studentID=stID;
  strcpy(name,stName);
}

// Display StudentId and Name
void Student::display() {
  cout<<"Student ID\t:"<<studentID<<endl;
  cout<<"Student Name\t:"<<name;
}
