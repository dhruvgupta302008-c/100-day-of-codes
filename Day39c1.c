/*
Q77. Check if the elements on the diagonal of a matrix are distinct.
*/

#include <stdio.h>

int main()
{
    int a[10][10];
    int n, i, j;
    int distinct = 1;

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

    // Compare each main diagonal element with the others
    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(a[i][i] == a[j][j])
            {
                distinct = 0;
                break;
            }
        }

        if(distinct == 0)
            break;
    }

    if(distinct == 1)
        printf("Diagonal elements are distinct.\n");
    else
        printf("Diagonal elements are not distinct.\n");

    return 0;
}
