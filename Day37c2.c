/*
Q74. Find the transpose of a matrix.
*/

#include <stdio.h>

void transpose()
{
    int a[10][10];
    int rows, cols, i, j;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter matrix elements:\n");

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Transpose of matrix:\n");

    for(j = 0; j < cols; j++)
    {
        for(i = 0; i < rows; i++)
        {
            printf("%d ", a[i][j]);
        }

        printf("\n");
    }
}

int main()
{
    transpose();
    return 0;
}
