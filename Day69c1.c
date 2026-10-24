/*
Q119 (Logic Enhancers)

Write a program to take an integer array as input.
Only one element will be repeated.
Print the repeated element.
Try to find the result in one single iteration.
*/

#include <stdio.h>

int main()
{
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter array elements:\n");

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(a[i] == a[j])
            {
                printf("Repeated element = %d", a[i]);
                return 0;
            }
        }
    }

    return 0;
}
