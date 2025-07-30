/*Que no.3  Write a C++ program to check if a given string is a palindrome
(reads the same forwards and backwards). Objective: Practice string operations.*/

#include <iostream>
#include <string>
#include <algorithm> // Required for std::reverse

bool isPalindrome(const std::string& str) {
    std::string reversed_str = str; // Create a copy of the original string
    std::reverse(reversed_str.begin(), reversed_str.end()); // Reverse the copy
    return str == reversed_str; // Compare original and reversed strings
}

int main() {
    std::string input_string;
    std::cout << "Enter a string to check if it's a palindrome: ";
    std::getline(std::cin, input_string); // Read the entire line including spaces

    if (isPalindrome(input_string)) {
        std::cout << "\"" << input_string << "\" is a palindrome." << std::endl;
    } else {
        std::cout << "\"" << input_string << "\" is not a palindrome." << std::endl;
    }

    return 0;
}
