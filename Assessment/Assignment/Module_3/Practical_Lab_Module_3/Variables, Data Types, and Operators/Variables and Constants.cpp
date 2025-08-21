/* Que no1 Write a C++ program that demonstrates the use of variables and constants. Create variables of different
 data types and perform operations on them. Objective: Understand the difference between variables and constants.*/

#include <iostream>
#include <string> // Required for using std::string

int main() {
    // --- Constants ---
    // Constants are values that cannot be changed after initialization.
    // They are declared using the 'const' keyword.
    const double PI = 3.14159;
    const int MAX_ATTEMPTS = 5;
    const std::string GREETING = "Hello, C++!";

    std::cout << "--- Demonstrating Constants ---" << std::endl;
    std::cout << "Value of PI: " << PI << std::endl;
    std::cout << "Maximum attempts allowed: " << MAX_ATTEMPTS << std::endl;
    std::cout << "Greeting message: " << GREETING << std::endl;

    // PI = 3.0; // This would cause a compile-time error as PI is a constant.

    std::cout << "\n--- Demonstrating Variables ---" << std::endl;

    // --- Variables ---
    // Variables are storage locations whose values can change during program execution.

    // Integer variable
    int age = 30;
    std::cout << "Initial age: " << age << std::endl;
    age = age + 5; // Modifying the variable
    std::cout << "Age after adding 5: " << age << std::endl;

    // Floating-point variable (double for higher precision)
    double temperature = 25.5;
    std::cout << "Initial temperature: " << temperature << "°C" << std::endl;
    temperature = temperature * 1.8 + 32; // Convert to Fahrenheit
    std::cout << "Temperature in Fahrenheit: " << temperature << "°F" << std::endl;

    // Character variable
    char initial = 'J';
    std::cout << "Initial: " << initial << std::endl;
    initial = 'K'; // Modifying the character
    std::cout << "New initial: " << initial << std::endl;

    // Boolean variable
    bool isStudent = true;
    std::cout << "Is student (true/false): " << isStudent << std::endl;
    isStudent = false; // Modifying the boolean
    std::cout << "Is student now: " << isStudent << std::endl;

    // String variable
    std::string userName = "Alice";
    std::cout << "User name: " << userName << std::endl;
    userName = "Bob"; // Modifying the string
    std::cout << "New user name: " << userName << std::endl;

    // Performing operations with multiple variables
    int num1 = 10;
    int num2 = 20;
    int sum = num1 + num2;
    std::cout << "Sum of " << num1 << " and " << num2 << ": " << sum << std::endl;

    return 0;
}
