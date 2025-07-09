//  Que no.2 Pascal’s Triangle 2 using recursive.

// using recursive:
#include<stdio.h>
long long binomialCoefficient(int n, int k) {
    if (k < 0 || k > n) {
        return 0; // Invalid cases
    }
    if (k == 0 || k == n) {
        return 1;
    }
    // Recursive step
    return binomialCoefficient(n - 1, k - 1) + binomialCoefficient(n - 1, k);
}

int main(){
    int rows, i, j, space;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 0; i < rows; i++) {
        for (space = 1; space <= rows - i; space++) {
            printf("  ");
        }

        for (j = 0; j <= i; j++) {
            printf("%4lld", binomialCoefficient(i, j));
        }
        printf("\n");
    }
}
