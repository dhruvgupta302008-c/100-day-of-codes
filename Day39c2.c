/*
Q78. Find the sum of main diagonal elements for a square matrix.
*/

#include <stdio.h>

int main()
{
    int a[10][10];
    int n, i, j;
    int sum = 0;

    printf("Enter the size of square matrix: ");
    scanf("%d", &n);

    printf("Enter the matrix elements:\n");

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Add main diagonal elements
    for(i = 0; i < n; i++)
    {
        sum = sum + a[i][i];
    }

    printf("Sum of main diagonal elements = %d\n", sum);

    return 0;
}
