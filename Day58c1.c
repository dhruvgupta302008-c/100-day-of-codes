/*
Question:
Write a program to take an integer array nums.
Print an array answer such that answer[i] is equal to
the product of all the elements of nums except nums[i].

The product of any prefix or suffix of nums is guaranteed
to fit in a 32-bit integer.

Follow-up (Optional):
Can you write a code that runs in O(n) time and without
using the division operation?
*/

#include <stdio.h>

int main()
{
    int nums[100], answer[100];
    int n, i, j;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    for(i = 0; i < n; i++)
    {
        answer[i] = 1;

        for(j = 0; j < n; j++)
        {
            if(i != j)
            {
                answer[i] = answer[i] * nums[j];
            }
        }
    }

    printf("Answer: ");

    for(i = 0; i < n; i++)
    {
        printf("%d ", answer[i]);
    }

    return 0;
}
