/*Que no.3 Write a C++ program to display the multiplication table of a given
number using a for loop. Objective: Practice using loops.*/
#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter a number to display its multiplication table: ";
    cin >> number;


    cout << "Multiplication Table of " << number << ":" <<endl;


    for (int i = 1; i <= 10; ++i) {
        cout << number << " * " << i << " = " << (number * i) <<endl;
    }
}
