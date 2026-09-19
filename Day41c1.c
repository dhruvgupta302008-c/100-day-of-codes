/*
Q81 (Strings):
Count characters in a string without using built-in
length functions.
*/

#include <stdio.h>

int main()
{
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while(str[i] != '\0' && str[i] != '\n')
    {
        i++;
    }

    printf("Number of characters = %d", i);

    return 0;
}
