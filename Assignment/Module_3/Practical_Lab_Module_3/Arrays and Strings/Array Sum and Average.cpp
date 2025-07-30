/*Que no.1  Write a C++ program that accepts an array of integers, calculates the sum and
average, and displays the results. Objective: Understand basic array manipulation.*/

#include <iostream>
#include <vector> // Using vector for dynamic array size
using namespace std;

int main() {
    int size;

    // Prompt user for the number of elements
    cout << "Enter the number of elements in the array: ";
    cin >> size;

    // Input validation for array size
    if (size <= 0) {
        cout << "Array size must be positive." <<endl;
        return 1; // Indicate an error
    }

    // Declare a vector (dynamic array) to store integers
    vector<int> arr(size);

    // Accept array elements from the user
    cout << "Enter " << size << " integers:" <<endl;
    for (int i = 0; i < size; ++i) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    // Calculate the sum of array elements
    long long sum = 0; // Use long long to prevent potential overflow for large sums
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }

    // Calculate the average
    // Cast sum to double to ensure floating-point division
    double average = static_cast<double>(sum) / size;

    // Display the results
    cout << "\nArray elements: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout <<endl;

    cout << "Sum of elements: " << sum <<endl;
    cout << "Average of elements: " << average <<endl;

}
