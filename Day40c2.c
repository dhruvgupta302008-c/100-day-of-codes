/*
Q80 (2D Arrays):
Multiply two matrices.
*/

#include <stdio.h>

int main()
{
    int a[2][3], b[3][2], c[2][2];
    int i, j, k;

    printf("Enter elements of first 2x3 matrix:\n");

    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of second 3x2 matrix:\n");

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    /* Matrix multiplication */
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            c[i][j] = 0;

            for(k = 0; k < 3; k++)
            {
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
            }
        }
    }

    printf("Resultant Matrix:\n");

    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            printf("%d ", c[i][j]);
        }

        printf("\n");
    }

    return 0;
}
