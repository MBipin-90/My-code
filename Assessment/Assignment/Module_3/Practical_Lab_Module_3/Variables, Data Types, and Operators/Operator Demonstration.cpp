/*Que no. 3 Write a C++ program that demonstrates arithmetic, relational, logical, and bitwise operators.
Perform operations using each type of operator and display
the results. Objective: Reinforce understanding of different types of operators in C++. */

#include <iostream>
using namespace std;

int main() {
    // Declare variables
    int a = 10;
    int b = 3;
    bool condition1 = true;
    bool condition2 = false;
    int num1 = 5;  // Binary: 0101
    int num2 = 3;  // Binary: 0011

    cout << "--- Arithmetic Operators ---" <<endl;
    cout << "a + b = " << (a + b) <<endl; // Addition
    cout << "a - b = " << (a - b) <<endl; // Subtraction
    cout << "a * b = " << (a * b) <<endl; // Multiplication
    cout << "a / b = " << (a / b) <<endl; // Division (integer division)
    cout << "a % b = " << (a % b) <<endl; // Modulus
    cout << "++a = " << (++a) <<endl;     // Pre-increment
    cout << "--b = " << (--b) <<endl;     // Pre-decrement
    cout <<endl;

    cout << "--- Relational Operators ---" <<endl;
    cout << "a == b: " << (a == b) <<endl; // Equal to
    cout << "a != b: " << (a != b) <<endl; // Not equal to
    cout << "a > b: " << (a > b) <<endl;   // Greater than
    cout << "a < b: " << (a < b) <<endl;   // Less than
    cout << "a >= b: " << (a >= b) <<endl; // Greater than or equal to
    cout << "a <= b: " << (a <= b) <<endl; // Less than or equal to
    cout <<endl;

    cout << "--- Logical Operators ---" <<endl;
    cout << "condition1 && condition2: " << (condition1 && condition2) <<endl; // Logical AND
    cout << "condition1 || condition2: " << (condition1 || condition2) <<endl; // Logical OR
    cout << "!condition1: " << (!condition1) <<endl;                           // Logical NOT
    cout <<endl;

    cout << "--- Bitwise Operators ---" <<endl;
    cout << "num1 & num2 (Bitwise AND): " << (num1 & num2) <<endl; // 0101 & 0011 = 0001 (1)
    cout << "num1 | num2 (Bitwise OR): " << (num1 | num2) <<endl;  // 0101 | 0011 = 0111 (7)
    cout << "num1 ^ num2 (Bitwise XOR): " << (num1 ^ num2) <<endl; // 0101 ^ 0011 = 0110 (6)
    cout << "~num1 (Bitwise NOT): " << (~num1) <<endl;             // Inverts all bits (depends on integer size)
    cout << "num1 << 1 (Left Shift): " << (num1 << 1) <<endl;      // 0101 << 1 = 1010 (10)
    cout << "num1 >> 1 (Right Shift): " << (num1 >> 1) <<endl;     // 0101 >> 1 = 0010 (2)
    cout <<endl;
}
