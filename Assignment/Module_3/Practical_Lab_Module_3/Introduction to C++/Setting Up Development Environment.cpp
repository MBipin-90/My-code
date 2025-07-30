/* Que no.4 Write a program that asks for two numbers and displays their sum. Ensure this is
done after setting up the IDE (like Dev C++ or CodeBlocks).
o Objective: Help students understand how to install, configure, and run programs
in an IDE. */

#include <iostream>
using namespace std;

int main() {
    int num1, num2, sum;
    //  enter the first number
    cout << "Enter the first number: ";
    cin >> num1; // Read the first number from the user

    //  enter the second number
    cout << "Enter the second number: ";
    cin >> num2; // Read the second number from the user

    sum = num1 + num2; // Calculate the sum of the two numbers

    // Display the sum to the user
    cout << "The sum of " << num1 << " and " << num2 << " is: " << sum <<endl;
}
