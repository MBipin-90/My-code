/* Que no.3 Write two small programs: one using Procedural Programming (POP) to calculate the
area of a rectangle, and another using Object-Oriented Programming (OOP) with a
class and object for the same task.
Objective: Highlight the difference between POP and OOP approaches. */

// Using POP.

/*#include <iostream>

// Function to calculate the area of a rectangle
double calculateArea(double length, double width) {
    return length * width;
}

int main() {
    double rectLength = 10.0;
    double rectWidth = 5.0;

    // Call the function to calculate the area
    double area = calculateArea(rectLength, rectWidth);

    std::cout << "Area of the rectangle (POP): " << area << std::endl;
}*/

// Using OOPs.

#include <iostream>

// Define a class for Rectangle
class Rectangle {
private:
    double length;
    double width;

public:
    // Constructor to initialize length and width
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }

    // Method to calculate the area
    double calculateArea() {
        return length * width;
    }
};

int main() {
    // Create an object of the Rectangle class
    Rectangle myRectangle(10.0, 5.0);

    // Call the method on the object to calculate the area
    double area = myRectangle.calculateArea();

    std::cout << "Area of the rectangle (OOP): " << area << std::endl;

    return 0;
}
