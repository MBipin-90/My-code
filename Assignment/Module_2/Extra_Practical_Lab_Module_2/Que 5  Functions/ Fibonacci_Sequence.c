//Que no.1  Fibonacci Sequence.
#include<stdio.h>
// Recursive function to generate Fibonacci sequence.
void fibonacciRecursive(int n, int t1, int t2) {
    if (n > 0) {
        printf("%d ", t1);
        fibonacciRecursive(n - 1, t2, t1 + t2);
    }
}

// Iterative function to generate Fibonacci sequence.
void fibonacciIterative(int n) {
    int t1 = 0, t2 = 1, nextTerm;
    printf("Iterative: ");
    for (int i = 1; i <= n; ++i) {
        printf("%d ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    printf("\n");
}

// Recursive function to calculate the Nth Fibonacci number.
int fibonacciNthRecursive(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacciNthRecursive(n - 1) + fibonacciNthRecursive(n - 2);
}

// Iterative function to calculate the Nth Fibonacci number.
int fibonacciNthIterative(int n) {
    int t1 = 0, t2 = 1, nextTerm, i;
    if (n <= 1) {
        return n;
    }
    for (i = 2; i <= n; i++) {
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    return t2;
}

int main() {
    int terms;

    printf("Enter the number of terms: ");
    scanf("%d", &terms);

    printf("Recursive: ");
    fibonacciRecursive(terms, 0, 1);
    printf("\n");

    fibonacciIterative(terms);

    printf("Nth Fibonacci (Recursive): %d\n", fibonacciNthRecursive(terms));
    printf("Nth Fibonacci (Iterative): %d\n", fibonacciNthIterative(terms));
}
