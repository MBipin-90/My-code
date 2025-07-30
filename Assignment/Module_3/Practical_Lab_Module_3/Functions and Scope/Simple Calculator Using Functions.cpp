/*Que no.1  Write a C++ program that defines functions for basic
arithmetic operations (add, subtract, multiply, divide). The main function should call these
based on user input. Objective: Practice defining and using functions in C++.*/
#include <iostream>

// Function to perform addition
double add(double num1, double num2) {
    return num1 + num2;
}

// Function to perform subtraction
double subtract(double num1, double num2) {
    return num1 - num2;
}

// Function to perform multiplication
double multiply(double num1, double num2) {
    return num1 * num2;
}

// Function to perform division
double divide(double num1, double num2) {
    if (num2 != 0) { // Prevent division by zero
        return num1 / num2;
    } else {
        std::cout << "Error: Division by zero is not allowed." << std::endl;
        return 0.0; // Return 0.0 or a specific error indicator
    }
}

int main() {
    double number1, number2;
    char operation;

    // Get user input for numbers
    std::cout << "Enter the first number: ";
    std::cin >> number1;

    std::cout << "Enter the second number: ";
    std::cin >> number2;

    // Get user input for the desired operation
    std::cout << "Enter the operation (+, -, *, /): ";
    std::cin >> operation;

    // Perform the operation based on user input using a switch statement
    switch (operation) {
        case '+':
            std::cout << "Result: " << add(number1, number2) << std::endl;
            break;
        case '-':
            std::cout << "Result: " << subtract(number1, number2) << std::endl;
            break;
        case '*':
            std::cout << "Result: " << multiply(number1, number2) << std::endl;
            break;
        case '/':
            std::cout << "Result: " << divide(number1, number2) << std::endl;
            break;
        default:
            std::cout << "Invalid operation entered." << std::endl;
            break;
    }
}
