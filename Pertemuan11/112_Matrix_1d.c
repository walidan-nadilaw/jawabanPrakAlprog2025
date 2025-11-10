#include <stdio.h>
#include <stdlib.h>

void matrixInput(int row, int col, int *matrix){
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &matrix[i * col + j]);
        }
    }
}

void printZeroMatrix(int row, int col){
    printf("%d %d\n", row, col);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("0 ");
        }
        printf("\n");   
    }
}

void printSumMatrix(int row1, int col1, int *matrix1, int row2, int col2, int *matrix2){
    if (row1 != row2 || col1 != col2)
    {
        printf("ERROR");
    } else {
        printf("%d %d\n", row1, col1);
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col1; j++)
            {
                printf("%d ", matrix1[i * col1 + j] + matrix2[i * col1 + j]);
            }
            printf("\n");   
        }
    }
}

void printSubMatrix(int row1, int col1, int *matrix1, int row2, int col2, int *matrix2){
    if (matrix1 == matrix2) printZeroMatrix(row1, col1);
    else if (row1 != row2 || col1 != col2)
    {
        printf("ERROR");
    } else {
        printf("%d %d\n", row1, col1);
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col1; j++)
            {
                printf("%d ", matrix1[i * col1 + j] - matrix2[i * col1 + j]);
            }
            printf("\n");   
        }
    }
}

void printMultMatrix(int row1, int col1, int *matrix1, int row2, int col2, int *matrix2){
    if(col1 != row2){
        printf("ERROR");
    } else
    {
        printf("%d %d\n", row1, col2);
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col2; j++)
            {
                long long int val = 0;
                for (int k = 0; k < col1; k++)
                {
                    val += matrix1[i * col1 + k] * matrix2[k * col2 + j];
                }
                printf("%lld ", val);
            }
            printf("\n");   
        }
    }
}

int main(){
    int rowA, colA, rowB, colB;

    scanf("%d %d", &rowA, &colA);
    int matrixA[rowA * colA];
    matrixInput(rowA, colA, matrixA);
    
    scanf("%d %d", &rowB, &colB);
    int matrixB[rowB * colB];
    matrixInput(rowB, colB, matrixB);

    char matrix1;
    char matrix2;
    char operation;
    scanf(" %c", &matrix1);
    scanf(" %c", &operation);
    scanf(" %c", &matrix2);

   if (operation == '+'){
        if (matrix1 == 'A' && matrix2 == 'B'){
            printSumMatrix(rowA, colA, matrixA, rowB, colB, matrixB);
        }
        else if (matrix1 == 'B' && matrix2 == 'A'){
            printSumMatrix(rowB, colB, matrixB, rowA, colA, matrixA);
        }
        else if (matrix1 == 'A')
            printSumMatrix(rowA, colA, matrixA, rowA, colA, matrixA);
        else
            printSumMatrix(rowB, colB, matrixB, rowB, colB, matrixB);
    }

    else if (operation == '-'){
        if (matrix1 == 'A' && matrix2 == 'B'){
            printSubMatrix(rowA, colA, matrixA, rowB, colB, matrixB);
        }
        else if (matrix1 == 'B' && matrix2 == 'A'){
            printSubMatrix(rowB, colB, matrixB, rowA, colA, matrixA);
        }
        else if (matrix1 == 'A')
            printSubMatrix(rowA, colA, matrixA, rowA, colA, matrixA);
        else
            printSubMatrix(rowB, colB, matrixB, rowB, colB, matrixB);
    }

    else if (operation == '*')
    {
        if (matrix1 == 'A' && matrix2 == 'B'){
            printMultMatrix(rowA, colA, matrixA, rowB, colB, matrixB);
        }
        else if (matrix1 == 'B' && matrix2 == 'A'){
            printMultMatrix(rowB, colB, matrixB, rowA, colA, matrixA);
        }
        else if (matrix1 == 'A')
            printMultMatrix(rowA, colA, matrixA, rowA, colA, matrixA);
        else
            printMultMatrix(rowB, colB, matrixB, rowB, colB, matrixB);
    }
    

    return 0;
}