/*Que no.4  Write a program that prints a right-angled triangle using stars (*) with
a nested loop. Objective: Learn nested control structures.*/
#include <iostream>
using namespace std;

int main() {
    int numRows;

    cout << "Enter the number of rows for the right-angled triangle: ";
    cin >> numRows;

    for (int i = 1; i <= numRows; ++i) {

        for (int j = 1; j <= i; ++j) {
            cout << "* ";
        }
        cout <<endl;
    }
}
