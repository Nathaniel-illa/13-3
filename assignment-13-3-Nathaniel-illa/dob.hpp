#ifndef DOB_HPP
#define DOB_HPP

class DOB {
private:
    int month;
    int day;

public:
    DOB(); // Default constructor
    DOB(int m, int d); // Parameterized constructor
    int getMonth() const; // Getter for month
    int getDay() const; // Getter for day
    void printDate() const; // Prints the date in mm/dd format
    void setDOB(int m, int d); // Setter for both month and day
    void setMonth(int m); // Setter for month
    void setDay(int d); // Setter for day
};

#endif