/*
Question:
Write a program to take a sorted array (say nums[]) and an integer
(say target) as inputs. The elements in the sorted array might be repeated.

You need to print the first and last occurrence of the target and print
the index of first and last occurrence.

Print -1, -1 if the target is not present.

Follow-up (optional):
Can you do it in O(log n) Time Complexity?
*/

#include <stdio.h>

int main()
{
    int n, target;
    int first = -1, last = -1;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[n];

    printf("Enter sorted array elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    printf("Enter target: ");
    scanf("%d", &target);

    // Find first occurrence
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == target)
        {
            first = i;
            break;
        }
    }

    // Find last occurrence
    for (int i = n - 1; i >= 0; i--)
    {
        if (nums[i] == target)
        {
            last = i;
            break;
        }
    }

    printf("%d %d", first, last);

    return 0;
}
