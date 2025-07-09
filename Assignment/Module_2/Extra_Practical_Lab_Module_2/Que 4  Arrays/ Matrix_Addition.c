// Que no.2  Matrix Addition
#include<stdio.h>
void matrixAddition(int rows, int cols, int mat1[][cols], int mat2[][cols], int result[][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

void matrixMultiplication(int rows1, int cols1, int mat1[][cols1], int rows2, int cols2, int mat2[][cols2], int result[][cols2]) {
    if (cols1 != rows2) {
        printf("Matrix multiplication not possible.\n");
        return;
    }

    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}


void printMatrix(int rows, int cols, int matrix[][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;

    printf("Enter the number of rows for the matrices: ");
    scanf("%d", &rows);
    printf("Enter the number of columns for the matrices: ");
    scanf("%d", &cols);

    int matrix1[rows][cols], matrix2[rows][cols], result[rows][cols];

    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    matrixAddition(rows, cols, matrix1, matrix2, result);

    printf("\nResultant matrix after addition:\n");
    printMatrix(rows, cols, result);

    if(rows == cols){
      int multiplicationResult[rows][cols];
      matrixMultiplication(rows, cols, matrix1, rows, cols, matrix2, multiplicationResult);
      printf("\nResultant matrix after multiplication:\n");
      printMatrix(rows, cols, multiplicationResult);
    }
     else
        printf("\nMatrix multiplication not possible for given dimensions.\n");
}
