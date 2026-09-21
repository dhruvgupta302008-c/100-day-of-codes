/*
Q86 (Strings):
Write a C program to check if a string is a palindrome.
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, length, flag = 0;

    printf("Enter a string: ");
    gets(str);

    length = strlen(str);

    for(i = 0; i < length / 2; i++)
    {
        if(str[i] != str[length - i - 1])
        {
            flag = 1;
            break;
        }
    }

    if(flag == 0)
    {
        printf("The string is a palindrome.");
    }
    else
    {
        printf("The string is not a palindrome.");
    }

    return 0;
}
