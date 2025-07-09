// Que no.2 Number Comparison.
#include<stdio.h>
int main(){
    int num1, num2, num3;
    int largest, smallest;

    // Input
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Using if-else statements.

    if (num1 >= num2 && num1 >= num3) {
        largest = num1;
    } else if (num2 >= num1 && num2 >= num3) {
        largest = num2;
    } else {
        largest = num3;
    }

    if (num1 <= num2 && num1 <= num3) {
        smallest = num1;
    } else if (num2 <= num1 && num2 <= num3) {
        smallest = num2;
    } else {
        smallest = num3;
    }

    printf("Largest number (if-else): %d\n", largest);
    printf("Smallest number (if-else): %d\n", smallest);
    printf("\n");

    // Using switch case statements.

    int case_val;   // case value.

    if (num1 >= num2 && num1 >= num3) {
        case_val = 1;
    } else if (num2 >= num1 && num2 >= num3) {
        case_val = 2;
    } else {
        case_val = 3;
    }

    switch (case_val) {
      case 1:
          largest = num1;
          break;
      case 2:
          largest = num2;
          break;
      case 3:
          largest = num3;
          break;
    }


    if (num1 <= num2 && num1 <= num3) {
        case_val = 1;
    } else if (num2 <= num1 && num2 <= num3) {
        case_val = 2;
    } else {
        case_val = 3;
    }

    switch (case_val) {
        case 1:
            smallest = num1;
            break;
        case 2:
            smallest = num2;
            break;
        case 3:
            smallest = num3;
            break;
    }

   printf("Largest number (switch-case): %d\n", largest);
   printf("Smallest number (switch-case): %d\n", smallest);
}
