/*Que no.1 Write a C++ program that takes a student’s marks as input and calculates the
grade based on if-else conditions. Objective: Practice conditional statements (if-else).*/

#include <iostream>
using namespace std;

int main() {
    int marks; // store the student's marks

    // enter the student's marks
    cout << "Enter student's marks (0-100): ";
    cin >> marks;

    // Validate the input to ensure marks are within a valid range
    if (marks < 0 || marks > 100) {
        cout << "Invalid marks entered. Please enter marks between 0 and 100." <<endl;
    }

    else if (marks >= 90) {
        cout << "Grade: A+" <<endl;
    } else if (marks >= 80) {
        cout << "Grade: A" <<endl;
    } else if (marks >= 70) {
        cout << "Grade: B" <<endl;
    } else if (marks >= 60) {
        cout << "Grade: C" <<endl;
    } else if (marks >= 50) {
        cout << "Grade: D" <<endl;
    } else {
        cout << "Grade: F" <<endl;
    }
}
