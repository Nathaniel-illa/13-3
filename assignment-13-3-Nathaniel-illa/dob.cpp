#include "dob.hpp"
#include <iostream>
using namespace std;

// Default constructor
DOB::DOB() : month(1), day(1) {}

// Parameterized constructor
DOB::DOB(int m, int d) : month(m), day(d) {}

// Getter for month
int DOB::getMonth() const {
    return month;
}

// Getter for day
int DOB::getDay() const {
    return day;
}

// Prints the date in mm/dd format
void DOB::printDate() const {
    cout << month << "/" << day << endl;
}

// Setter for both month and day
void DOB::setDOB(int m, int d) {
    month = m;
    day = d;
}

// Setter for month
void DOB::setMonth(int m) {
    month = m;
}

// Setter for day
void DOB::setDay(int d) {
    day = d;
}