// Que no.1  Grade Calculator.

#include<stdio.h>
int main(){
 int marks;
// char grade;

    printf("Enter the marks: ");
    scanf("%d", &marks);

    if (marks > 90) {
       printf("Grade: A\n");
        //grade='A';
    } else if (marks > 75 && marks <= 90){
        printf("Grade: B\n");
       // grade='B';
    } else if (marks > 50 && marks <=75) {
        printf("Grade: C\n");
       // grade='C';
    } else {
        printf("Grade: D\n");
       // grade='D';
    }
       // printf("Grade: %c\n", grade);

}
