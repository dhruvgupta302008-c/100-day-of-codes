/*
Question 66:
Insert an element in a sorted array at the appropriate position.
*/

#include <stdio.h>

void insert()
{
    int arr[10] = {10, 20, 30, 40, 50};
    int n = 5;
    int element = 25;
    int i;

    for (i = n - 1; i >= 0 && arr[i] > element; i--)
    {
        arr[i + 1] = arr[i];
    }

    arr[i + 1] = element;
    n++;

    printf("Array after insertion:\n");

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    insert();

    return 0;
}
