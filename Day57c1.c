/*
Q107. Write a program to take an array arr[] of integers as input
and find the previous greater element for each element.

The previous greater element is the nearest element on the LEFT
which is greater than the current element.

If no greater element exists on the left, print -1.

Use brute force (nested loops), not stack.
*/

#include <stdio.h>

int main()
{
    int arr[100], n, i, j;
    int found;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++)
    {
        found = 0;

        for(j = i - 1; j >= 0; j--)
        {
            if(arr[j] > arr[i])
            {
                printf("%d", arr[j]);
                found = 1;
                break;
            }
        }

        if(found == 0)
        {
            printf("-1");
        }

        if(i < n - 1)
        {
            printf(",");
        }
    }

    return 0;
}
