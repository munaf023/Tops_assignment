#include <stdio.h>
int main() 
{
    int i,j,k,a[10][10], b[10][10], result[10][10];
    int rows1, cols1, rows2, cols2;

    printf("Enter the number of rows and columns for the first matrix: ");
    scanf("%d %d", &rows1, &cols1);

    printf("Enter elements for the first matrix:\n");
    for (i = 0; i < rows1; ++i) {
        for (j = 0; j < cols1; ++j) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the number of rows and columns for the second matrix: ");
    scanf("%d %d", &rows2, &cols2);

    printf("Enter elements for the second matrix:\n");
    for (i = 0; i < rows2; ++i) {
        for (j = 0; j < cols2; ++j) {
            scanf("%d", &b[i][j]);
        }
    }

    if (rows1 == rows2 && cols1 == cols2)
	 {
        addMatrices(a, b, result, rows1, cols1);
        printf("\nSum of matrices:\n");
        displayMatrix(result, rows1, cols1);
    } else {
        printf("\nMatrices cannot be added. Dimensions are not the same.\n");
    }

    if (rows1 == rows2 && cols1 == cols2) {
        subtractMatrices(a, b, result, rows1, cols1);
        printf("\nDifference of matrices:\n");
        displayMatrix(result, rows1, cols1);
    } else {
        printf("\nMatrices cannot be subtracted. Dimensions are not the same.\n");
    }

    if (cols1 == rows2)
	{
        multiplyMatrices(a, b, result, rows1, cols1, cols2);
        printf("\nProduct of matrices:\n");
        displayMatrix(result, rows1, cols2);
    } else {
        printf("\nMatrices cannot be multiplied. Inner dimensions do not match.\n");
    }

    return 0;
}

void addMatrices(int a[][10], int b[][10], int result[][10], int rows, int cols)
{
    for (i = 0; i < rows; ++i) {
        for (j = 0; j < cols; ++j) {
            result[i][j] = a[i][j] + b[i][j];
        }
    }
}

void subtractMatrices(int a[][10], int b[][10], int result[][10], int rows, int cols)
{
    for (i = 0; i < rows; ++i) {
        for (j = 0; j < cols; ++j) {
            result[i][j] = a[i][j] - b[i][j];
        }
    }
}

void multiplyMatrices(int a[][10], int b[][10], int result[][10], int rows1, int cols1, int cols2)
{
    for (i = 0; i < rows1; ++i) {
        for (j = 0; j < cols2; ++j) {
            result[i][j] = 0;
            for ( k = 0; k < cols1; ++k) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

void displayMatrix(int matrix[][10], int rows, int cols) {
    for (i = 0; i < rows; ++i) {
        for (j = 0; j < cols; ++j) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}


