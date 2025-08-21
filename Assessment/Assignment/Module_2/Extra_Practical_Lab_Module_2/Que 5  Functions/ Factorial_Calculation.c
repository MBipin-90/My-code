// Que no.2  Factorial Calculation.
#include<stdio.h>
#include<time.h>
// Iterative factorial function
unsigned long long factorial_iterative(int n) {
    unsigned long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Recursive factorial function
unsigned long long factorial_recursive(int n) {
    if (n == 0) {
        return 1;
    }
    return n * factorial_recursive(n - 1);
}

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 1;
    }

    clock_t start, end;
    double cpu_time_used;

    // Measure time for iterative factorial
    start = clock();
    unsigned long long fact_iterative = factorial_iterative(num);
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Iterative Factorial of %d = %llu\n", num, fact_iterative);
    printf("Iterative calculation time: %f seconds\n", cpu_time_used);

    // Measure time for recursive factorial
    start = clock();
    unsigned long long fact_recursive = factorial_recursive(num);
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Recursive Factorial of %d = %llu\n", num, fact_recursive);
    printf("Recursive calculation time: %f seconds\n", cpu_time_used);
}
