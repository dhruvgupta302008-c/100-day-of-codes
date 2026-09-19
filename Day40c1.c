/*
Q79 (2D Arrays):
Perform diagonal traversal of a matrix.
*/

#include <stdio.h>

int main()
{
    int a[3][3];
    int i, j, d;

    printf("Enter 9 elements:\n");

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Diagonal Traversal:\n");

    /* Diagonals starting from first column */
    for(d = 0; d < 3; d++)
    {
        i = d;
        j = 0;

        while(i >= 0)
        {
            printf("%d ", a[i][j]);
            i--;
            j++;
        }
    }

    /* Remaining diagonals */
    for(d = 1; d < 3; d++)
    {
        i = 2;
        j = d;

        while(j < 3)
        {
            printf("%d ", a[i][j]);
            i--;
            j++;
        }
    }

    return 0;
}
