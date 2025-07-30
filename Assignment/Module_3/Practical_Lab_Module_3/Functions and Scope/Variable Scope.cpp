/*Que no.3  Write a program that demonstrates the difference between local and global variables in C++.
Use functions to show scope. Objective: Reinforce the concept of variable scope.*/
#include <iostream>

// Global variable: Accessible from anywhere in the program
int globalVar = 100;

void demonstrateLocalScope() {
    // Local variable: Accessible only within this function
    int localVar = 20;
    std::cout << "Inside demonstrateLocalScope():" << std::endl;
    std::cout << "Local variable (localVar): " << localVar << std::endl;
    // Attempting to access globalVar is possible here
    std::cout << "Global variable (globalVar) from inside function: " << globalVar << std::endl;
}

void modifyGlobalVariable() {
    // This function can modify the global variable
    globalVar = 500;
    std::cout << "Inside modifyGlobalVariable(): Global variable modified to: " << globalVar << std::endl;
}

void demonstrateShadowing() {
    // Local variable with the same name as a global variable (shadowing)
    int globalVar = 75;
    std::cout << "Inside demonstrateShadowing():" << std::endl;
    std::cout << "Local variable (globalVar, shadowing the global one): " << globalVar << std::endl;
    // To access the global variable when shadowed, use the scope resolution operator
    std::cout << "Global variable (::globalVar) when shadowed: " << ::globalVar << std::endl;
}

int main() {
    std::cout << "In main(): Initial global variable (globalVar): " << globalVar << std::endl;

    demonstrateLocalScope(); // Call function to show local scope

    std::cout << "\nIn main(): After calling demonstrateLocalScope(), globalVar is still: " << globalVar << std::endl;

    modifyGlobalVariable(); // Call function to modify global variable

    std::cout << "In main(): After calling modifyGlobalVariable(), globalVar is now: " << globalVar << std::endl;

    demonstrateShadowing(); // Call function to demonstrate shadowing

    std::cout << "\nIn main(): After calling demonstrateShadowing(), globalVar is still: " << globalVar << std::endl;

}
