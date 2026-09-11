/*
Question 65:
Search in a sorted array using binary search.
*/

#include <stdio.h>

void search()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int key = 30;
    int low = 0, high = 4, mid;
    int found = 0;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (arr[mid] == key)
        {
            found = 1;
            break;
        }
        else if (arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    if (found == 1)
        printf("Element found at position %d\n", mid + 1);
    else
        printf("Element not found\n");
}

int main()
{
    search();

    return 0;
}
