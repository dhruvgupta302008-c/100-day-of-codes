/*
Q103 (Logic Enhancers)

Write a program to take an array of integers as input and calculate
the pivot index of this array.

The pivot index is the index where the sum of all the numbers strictly
to the left of the index is equal to the sum of all the numbers strictly
to the index's right.

If the index is on the left edge of the array, then the left sum is 0
because there are no elements to the left. This also applies to the
right edge of the array.

Print the leftmost pivot index.
If no such index exists, print -1.

Follow-up: Try to solve this in O(n) time complexity.
*/

#include <stdio.h>

int main()
{
    int n, i;
    int a[100];
    int totalSum = 0;
    int leftSum = 0;
    int rightSum;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        totalSum = totalSum + a[i];
    }

    for (i = 0; i < n; i++)
    {
        rightSum = totalSum - leftSum - a[i];

        if (leftSum == rightSum)
        {
            printf("Pivot index = %d\n", i);
            return 0;
        }

        leftSum = leftSum + a[i];
    }

    printf("Pivot index = -1\n");

    return 0;
}
