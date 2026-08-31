/* Q44: Write a program to find the sum of the series:
   1 + 3/4 + 5/6 + 7/8 + ... up to n terms. */

#include <stdio.h>

int main()
{
    int n, i, numerator = 1, denominator = 2;
    float sum = 0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            sum = sum + 1;
        }
        else
        {
            numerator = numerator + 2;
            denominator = denominator + 2;
            sum = sum + (float)numerator / denominator;
        }
    }

    printf("Sum of the series = %.2f\n", sum);

    return 0;
}
