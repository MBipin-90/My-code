// Que no.3  Sum of Array Elements.
#include<stdio.h>
int main(){
 int n, i;
    float sum = 0.0, average;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Declare an array of size n
    float numbers[n];

    printf("Enter %d numbers:\n", n);
    // Input the numbers from the user and store them in the array
    for (i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%f", &numbers[i]);
        sum += numbers[i];
    }

    // Calculate the average
    average = sum / n;

    // Display the sum and average
    printf("Sum of the numbers: %.2f\n", sum);
    printf("Average of the numbers: %.2f\n", average);
}
