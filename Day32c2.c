/*
Q64. Write a C program to find the digit that occurs
the most times in an integer number.
*/

#include <stdio.h>

void findDigit()
{
    int num, digit, i;
    int count[10] = {0};
    int max = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while(num > 0)
    {
        digit = num % 10;

        count[digit]++;

        num = num / 10;
    }

    for(i = 1; i < 10; i++)
    {
        if(count[i] > count[max])
        {
            max = i;
        }
    }

    printf("Digit occurring most times = %d\n", max);
    printf("Number of times = %d\n", count[max]);
}

int main()
{
    findDigit();

    return 0;
}
