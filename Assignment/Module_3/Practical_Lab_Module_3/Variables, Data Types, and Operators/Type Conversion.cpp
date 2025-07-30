/* Que no.2 Write a C++ program that performs both implicit and explicit type conversions and prints the results.
Objective: Practice type casting in C++. */

#include <iostream> // Required for input/output operations

int main() {
    // Implicit Type Conversion (Automatic by compiler)
    int intValue = 10;
    double doubleValue = 5.5;

    // When an int and a double are involved in an arithmetic operation,
    // the int is implicitly converted to a double to perform the operation.
    double sumImplicit = intValue + doubleValue;
    std::cout << "Implicit Conversion:" << std::endl;
    std::cout << "int + double (10 + 5.5) = " << sumImplicit << std::endl; // Output: 15.5

    // When a smaller type is assigned to a larger type, it's implicitly converted.
    long long longValue = intValue;
    std::cout << "int assigned to long long (10) = " << longValue << std::endl; // Output: 10

    // Explicit Type Conversion (Type Casting)
    float floatValue = 12.7f; // 'f' suffix denotes a float literal

    // C-style cast: Explicitly converting float to int.
    // This truncates the decimal part.
    int intCasted = (int)floatValue;
    std::cout << "\nExplicit Conversion (C-style cast):" << std::endl;
    std::cout << "float to int (12.7f) = " << intCasted << std::endl; // Output: 12

    // C++ static_cast: Explicitly converting double to int.
    // This is a safer and more type-aware way of casting in C++.
    double anotherDouble = 25.99;
    int intStaticCasted = static_cast<int>(anotherDouble);
    std::cout << "Explicit Conversion (static_cast):" << std::endl;
    std::cout << "double to int (25.99) = " << intStaticCasted << std::endl; // Output: 25

    // Explicitly converting an int to a char (using ASCII values)
    int asciiValue = 65; // ASCII value for 'A'
    char charCasted = static_cast<char>(asciiValue);
    std::cout << "int to char (65) = " << charCasted << std::endl; // Output: A

    return 0;
}
