/*
Question:
Find the second largest element in an array.
*/

#include <stdio.h>

void secondLargest(int a[], int n)
{
    int largest, second, i;

    largest = a[0];
    second = a[1];

    if (second > largest)
    {
        int temp = largest;
        largest = second;
        second = temp;
    }

    for (i = 2; i < n; i++)
    {
        if (a[i] > largest)
        {
            second = largest;
            largest = a[i];
        }
        else if (a[i] > second && a[i] != largest)
        {
            second = a[i];
        }
    }

    printf("Second largest element = %d\n", second);
}

int main()
{
    int a[100], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    secondLargest(a, n);

    return 0;
}
