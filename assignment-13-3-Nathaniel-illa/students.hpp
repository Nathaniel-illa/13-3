#ifndef STUDENTS_HPP
#define STUDENTS_HPP

#include <string>
#include "dob.hpp"
using namespace std;

class Student {
private:
    int sid;
    string sname;
    DOB dob;

public:
    Student(); // Default constructor
    Student(string n, int id, DOB dob); // Parameterized constructor
    int getID() const; // Getter for student ID
    string getSname() const; // Getter for student name
    DOB getDOB() const; // Getter for DOB
    void setName(string name); // Setter for student name
    void setID(int id); // Setter for student ID
    void setDOB(DOB dob); // Setter for DOB
    void printStudent() const; // Print student details
};

#endif