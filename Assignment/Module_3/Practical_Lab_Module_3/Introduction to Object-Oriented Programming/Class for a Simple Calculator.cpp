/*Que no.1  Write a C++ program that defines a class Calculator with functions for addition, subtraction, multiplication, and division. Create objects
to use these functions. Objective: Introduce basic class structure.*/

#include <iostream>
using namespace std;

class Calculator {
public:
    // Function for addition
    double add(double num1, double num2) {
        return num1 + num2;
    }

    // Function for subtraction
    double subtract(double num1, double num2) {
        return num1 - num2;
    }

    // Function for multiplication
    double multiply(double num1, double num2) {
        return num1 * num2;
    }

    // Function for division
    double divide(double num1, double num2) {
        if (num2 != 0) {
            return num1 / num2;
        } else {
            cout << "Error: Division by zero is not allowed." <<endl;
            return 0.0; // Return 0 or handle error appropriately
        }
    }
};

int main() {
    // Create an object of the Calculator class
    Calculator myCalculator;

    double number1 = 10.0;
    double number2 = 5.0;

    // Use the functions through the object
    cout << "Addition: " << myCalculator.add(number1, number2) <<endl;
    cout << "Subtraction: " << myCalculator.subtract(number1, number2) <<endl;
    cout << "Multiplication: " << myCalculator.multiply(number1, number2) <<endl;
    cout << "Division: " << myCalculator.divide(number1, number2) <<endl;

    // Demonstrate division by zero error handling
    cout << "Division by zero: " << myCalculator.divide(number1, 0.0) <<endl;

    return 0;
}
