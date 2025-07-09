// Que no.3  Palindrome Check.
#include<stdio.h>
// Function to check if a number is a palindrome
int isNumberPalindrome(int num) {
    int reversedNum = 0, remainder, originalNum = num;

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    // Check if the original number is equal to the reversed number
    return originalNum == reversedNum;
}
int main(){
 int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (isNumberPalindrome(number)) {
        printf("%d is a palindrome.\n", number);
    } else {
        printf("%d is not a palindrome.\n", number);
    }
}
