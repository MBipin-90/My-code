/*Que no.2  Write a C++ program to perform matrix addition on two 2x2 matrices. o Objective: Practice multi-dimensional arrays.*/

#include <iostream>
using namespace std;

int main() {
    // Declare two 2x2 matrices and a result matrix
    int matrix1[2][2];
    int matrix2[2][2];
    int sumMatrix[2][2];

    // Input elements for the first matrix
    cout << "Enter elements of the first 2x2 matrix:" <<endl;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            cout << "Enter element at position (" << i + 1 << "," << j + 1 << "): ";
            cin >> matrix1[i][j];
        }
    }

    // Input elements for the second matrix
    cout << "\nEnter elements of the second 2x2 matrix:" <<endl;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            cout << "Enter element at position (" << i + 1 << "," << j + 1 << "): ";
            cin >> matrix2[i][j];
        }
    }

    // Perform matrix addition
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            sumMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Display the sum matrix
    cout << "\nSum of the two matrices:" <<endl;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            cout << sumMatrix[i][j] << " ";
        }
        cout <<endl;
    }

}
