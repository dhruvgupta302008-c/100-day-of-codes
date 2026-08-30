/* Q41: Write a program to swap the first and last digit of a number. */

#include <stdio.h>

int main()
{
    int num, first, last, digits = 0, temp, power = 1, middle;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    last = temp % 10;

    while (temp >= 10)
    {
        temp = temp / 10;
        digits++;
        power = power * 10;
    }

    first = temp;
    middle = (num % power) / 10;

    num = (last * power) + (middle * 10) + first;

    printf("Number after swapping first and last digit = %d\n", num);

    return 0;
}
