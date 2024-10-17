#include "students.hpp"
#include <iostream>
using namespace std;

// Default constructor
Student::Student() : sid(0), sname(""), dob() {}

// Parameterized constructor
Student::Student(string n, int id, DOB dob) : sname(n), sid(id), dob(dob) {}

// Getter for student ID
int Student::getID() const {
    return sid;
}

// Getter for student name
string Student::getSname() const {
    return sname;
}

// Getter for DOB
DOB Student::getDOB() const {
    return dob;
}

// Setter for student name
void Student::setName(string name) {
    sname = name;
}

// Setter for student ID
void Student::setID(int id) {
    sid = id;
}

// Setter for DOB
void Student::setDOB(DOB dob) {
    this->dob = dob;
}

// Print student details
void Student::printStudent() const {
    cout << "Student Name: " << sname << ", ID: " << sid << ", DOB: ";
    dob.printDate();
}