// Que no.2  Multiplication Table.
#include<stdio.h>
int main(){
   int num, range;

      printf("Enter an integer: ");
      scanf("%d", &num);

      printf("Enter the range for the multiplication table: ");
      scanf("%d", &range);

      printf("Multiplication table of %d up to %d:\n", num, range);
      for (int i = 1; i <= range; i++) {
          printf("%d * %d = %d\n", num, i, num * i);
      }
}
