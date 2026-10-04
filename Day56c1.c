/*
Q106 (Logic Enhancers)

Write a program to take an array arr[] of integers as input.
The task is to find the next greater element for each element of the
array in order of their appearance in the array.

Next greater element of an element in the array is the nearest element
on the right which is greater than the current element.

If there does not exist a greater element for the current element,
then the next greater element for the current element is -1.

Print the output for each element in a comma-separated fashion.

Note:
Do not use Stack. Use brute force approach (nested loops).
*/

#include <stdio.h>

int main()
{
    int arr[100];
    int n, i, j;
    int nextGreater;

    // Input size of array
    scanf("%d", &n);

    // Input array elements
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Find next greater element
    for(i = 0; i < n; i++)
    {
        nextGreater = -1;

        // Check elements to the right of arr[i]
        for(j = i + 1; j < n; j++)
        {
            if(arr[j] > arr[i])
            {
                nextGreater = arr[j];
                break;
            }
        }

        // Print comma-separated output
        if(i < n - 1)
            printf("%d, ", nextGreater);
        else
            printf("%d", nextGreater);
    }

    return 0;
}
