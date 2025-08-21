// Que no.3  Sum of Digits.
#include<stdio.h>
int main(){
 int num, originalNum, sum = 0, reversedNum = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &num);
    originalNum = num; // Store the original number for reversing

    // Calculate sum of digits
    while (num > 0) {
        remainder = num % 10;
        sum += remainder;
        num /= 10;
    }

    num = originalNum; // Reset num to the original value for reversing
    // Reverse the number
    while (num > 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    printf("Sum of digits: %d\n", sum);
    printf("Reversed number: %d\n", reversedNum);
}
