/* Que no.2 Write a C++ program that accepts user input for their name and age and then displays a personalized greeting.
Objective: Practice input/output operations using cin and cout.*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int age;

    // Prompt the user to enter their name and read the input
    cout << "Please enter your name: ";
    getline(cin, name);

    // Prompt the user to enter their age and read the input
    cout << "Please enter your age: ";
    cin >> age;

    // Display the personalized greeting
    cout << "Hello, " << name << "! You are " << age << " years old." <<endl;

    return 0;
}
