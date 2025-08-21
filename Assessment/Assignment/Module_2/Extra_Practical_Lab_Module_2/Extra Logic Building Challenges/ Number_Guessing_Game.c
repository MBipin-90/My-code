// Que no.3  Number Guessing Game.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, attempts = 0, maxAttempts = 7;

    srand(time(0));
    number = rand() % 100 + 1;  // Random number between 1 and 100

    printf("Guess a number between 1 and 100 (Max %d attempts):\n", maxAttempts);

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess < number)
            printf("Too low!\n");
        else if (guess > number)
            printf("Too high!\n");
        else {
            printf("Congratulations! You guessed it in %d attempts.\n", attempts);
            break;
        }

        if (attempts == maxAttempts) {
            printf("Sorry! You've used all your attempts. The number was %d\n", number);
        }

    } while (guess != number && attempts < maxAttempts);

}
