/*
Question:
Rotate an array to the right by k positions.
*/

#include <stdio.h>

void rotate(int a[], int n, int k)
{
    int temp[100];
    int i;

    k = k % n;

    for (i = 0; i < n; i++)
    {
        temp[(i + k) % n] = a[i];
    }

    for (i = 0; i < n; i++)
    {
        a[i] = temp[i];
    }
}

void display(int a[], int n)
{
    int i;

    printf("Rotated array: ");

    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}

int main()
{
    int a[100], n, k, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter value of k: ");
    scanf("%d", &k);

    rotate(a, n, k);
    display(a, n);

    return 0;
}
