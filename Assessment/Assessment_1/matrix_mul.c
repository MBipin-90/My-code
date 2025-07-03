#include<stdio.h>
int main()
{
    int a[2][2],b[2][2],mul[2][2];
    int i,j,k;

    //   Matrix Multiplication 1 .

    printf("                                                Matrix Multiplication \n");
    printf("--------- Matrix : 1 ---------\n"); // 1
    printf("\n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
           printf("Enter elements : ");
           scanf("%d",&a[i][j]);
        }
    }

    printf("\n");

    //  Matrix input 1 .

    //printf("Matrix Elements: \n");

    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
           printf("%d       ",a[i][j]);
        }
        printf("\n");
    }

     //  Matrix Multiplication 2 .

     printf("\n\n");
     printf("--------- Matrix : 2 ---------\n"); // 2
     printf("\n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            printf("Enter elements : ");
            scanf("%d",&b[i][j]);
        }
    }

    printf("\n");

    //  Matrix input 2 .

    //printf("Matrix Elements: \n");

    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
           printf("%d       ",b[i][j]);
        }
        printf("\n");
    }

    //  Matrix Multiplication.

    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            mul[i][j]=0;
            for(k=0; k<2; k++)
            {
                mul[i][j]+=a[i][k]*b[k][j];
                 mul[i][j];
            }
        }
    }

    // Result Matrix Multiplication Total.

    printf("\n");
    printf("--------- Result : Multiplication Matrix ---------\n");
    printf("\n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            printf("%d       ",mul[i][j]);
        }
        printf("\n");
    }
}
