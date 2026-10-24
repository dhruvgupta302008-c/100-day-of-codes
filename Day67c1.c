/*
Q117 (Logic Enhancers)

Write a program to take two sorted arrays of size m and n as input.
Merge both the arrays such that the merged array is also sorted.
Print the merged array.
*/

#include <stdio.h>

int main()
{
    int m, n;

    printf("Enter size of first array: ");
    scanf("%d", &m);

    int a[m];

    printf("Enter elements of first sorted array:\n");
    for(int i = 0; i < m; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n);

    int b[n];

    printf("Enter elements of second sorted array:\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }

    int c[m + n];

    int i = 0, j = 0, k = 0;

    while(i < m && j < n)
    {
        if(a[i] < b[j])
        {
            c[k] = a[i];
            i++;
        }
        else
        {
            c[k] = b[j];
            j++;
        }

        k++;
    }

    while(i < m)
    {
        c[k] = a[i];
        i++;
        k++;
    }

    while(j < n)
    {
        c[k] = b[j];
        j++;
        k++;
    }

    printf("Merged sorted array:\n");

    for(i = 0; i < m + n; i++)
    {
        printf("%d ", c[i]);
    }

    return 0;
}
