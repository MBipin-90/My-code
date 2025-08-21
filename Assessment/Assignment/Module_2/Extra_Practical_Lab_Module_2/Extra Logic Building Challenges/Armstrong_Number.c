// Que no.1  Armstrong Number.
#include <stdio.h>
#include <math.h>

int isArmstrong(int num) {
    int original = num, sum = 0, digits = 0, temp = num;

    // Count number of digits
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = num;
    while (temp != 0) {
        int rem = temp % 10;
        sum += pow(rem, digits);
        temp /= 10;
    }

    return (sum == original);
}

int main() {
    int number;
     printf("Enter an integer: ");
    scanf("%d", &number);

    if (isArmstrong(number)) {
        printf("%d is Armstrong number.\n", number);
    } else {
        printf("%d is not Armstrong number.\n", number);
    }
    //
    printf("\n");
    printf("Armstrong numbers between 1 and 1000:\n");
    for (int i = 1; i <= 1000; i++) {
        if (isArmstrong(i)) {
            printf("%d ", i);
        }
    }

}
