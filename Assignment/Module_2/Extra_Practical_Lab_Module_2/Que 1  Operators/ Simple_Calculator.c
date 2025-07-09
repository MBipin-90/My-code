// Que no.1  Simple Calculator.
#include<stdio.h>
int main(){
    double num1, num2, result;
    char operator;

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &operator);
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 == 0) {
                printf("Error: Division by zero!\n");
                return 1;
            }
            result = num1 / num2;
            break;
        case '%':
            if ((int)num2 == 0) {
                printf("Error: Modulus by zero!\n");
                return 1;
            }
             result = (int)num1 % (int)num2;
             break;
        default:
            printf("Error: Invalid operator!\n");
            return 1;
    }

    printf("Result: %.2f\n", result);
}
