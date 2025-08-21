/*Que no.2  Write a C++ program that calculates the factorial of a
number using recursion. Objective: Understand recursion in functions.*/
#include <iostream>

long long factorial(int n) {
    // Base case: Factorial of 0 or 1 is 1
    if (n == 0 || n == 1) {
        return 1;
    }
    // Recursive case: n! = n * (n-1)!
    else {
        return n * factorial(n - 1);
    }
}

int main() {
    int number;

    // Prompt the user to enter a number
    std::cout << "Enter a non-negative integer to calculate its factorial: ";
    std::cin >> number;

    // Check for negative input
    if (number < 0) {
        std::cout << "Factorial is not defined for negative numbers." << std::endl;
    } else {
        // Calculate and display the factorial
        long long result = factorial(number);
        std::cout << "The factorial of " << number << " is " << result << std::endl;
    }

}
