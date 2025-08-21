// Que no.1  Prime Number Check.
#include<stdio.h>
#include <stdbool.h> // Required for using bool type

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) {
        return 0; // Numbers less than or equal to 1 are not prime
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // Found a divisor, so it's not prime
        }
    }
    return 1; // No divisors found, so it's prime
}

int main() {
    int n, limit;

    // Part 1: Check if a single number is prime
    printf("Enter a number to check if it's prime: ");
    scanf("%d", &n);

    if (isPrime(n)) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);
    }

    // Part 2: Print all prime numbers up to a given limit
    printf("\nEnter a limit to print prime numbers up to: ");
    scanf("%d", &limit);

    printf("Prime numbers up to %d are: ", limit);
    for (int i = 2; i <= limit; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

