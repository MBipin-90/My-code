// Que no.1  Maximum and Minimum in Array.
#include<stdio.h>
int main(){
int arr[10];
    int i, max, min;

    // Input 10 integers from the user
    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    // Find maximum and minimum values
    max = arr[0];
    min = arr[0];
    for (i = 1; i < 10; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    // Print maximum and minimum
    printf("Maximum value: %d\n", max);
    printf("Minimum value: %d\n", min);

    // Sorting (Bubble Sort)
    int j, temp;
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Print sorted array
    printf("Sorted array (ascending): ");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

}
