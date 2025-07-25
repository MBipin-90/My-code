// Que no.2 Pascal�s Triangle 1 using loops.

// using loops:
#include<stdio.h>
int main(){
 int rows, i, j, coef = 1, space;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 0; i < rows; i++) {
        // Print leading spaces for alignment
        for (space = 1; space <= rows - i; space++) {
            printf("  ");
        }

        for (j = 0; j <= i; j++) {
            if (j == 0 || i == 0) {
                coef = 1;
            } else {
                coef = coef * (i - j + 1) / j;
            }
            printf("%4d", coef); // Print with formatting
        }
        printf("\n"); // Newline after each row
    }
}
