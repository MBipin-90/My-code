/*Que no.2  Write a C++ program that asks the user to guess a number between 1 and 100. The program should provide hints if
the guess is too high or too low. Use loops to allow
the user multiple attempts.  Objective: Understand while loops and conditional logic.*/

#include <iostream>
#include <cstdlib>  // Required for rand() and srand()
#include <ctime>    // Required for time() to seed the random number generator

int main() {
    // Seed the random number generator with the current time
    // This ensures a different random number each time the program runs
    srand(static_cast<unsigned int>(time(0)));

    // Generate a random number between 1 and 100
    // rand() % 100 gives a number between 0 and 99, so add 1 for 1 to 100
    int secretNumber = (rand() % 100) + 1;
    int guess;
    int attempts = 0;

    std::cout << "Welcome to the Number Guessing Game!" << std::endl;
    std::cout << "I have chosen a number between 1 and 100." << std::endl;

    // Loop until the user guesses the correct number
    while (true) {
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        attempts++; // Increment the attempt counter

        if (guess > secretNumber) {
            std::cout << "Too high! Try again." << std::endl;
        } else if (guess < secretNumber) {
            std::cout << "Too low! Try again." << std::endl;
        } else {
            std::cout << "Congratulations! You guessed the number " << secretNumber << " in " << attempts << " attempts." << std::endl;
            break; // Exit the loop when the correct number is guessed
        }
    }

    return 0; // Indicate successful program execution
}
