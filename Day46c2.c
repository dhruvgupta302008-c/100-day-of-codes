/*
Q92 (Strings)
Find the first repeating lowercase alphabet in a string.
*/

#include <stdio.h>

int main()
{
    char str[100];
    int i, count[26] = {0};

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            count[str[i] - 'a']++;
        }
    }

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z' &&
           count[str[i] - 'a'] > 1)
        {
            printf("First repeating lowercase alphabet: %c", str[i]);
            return 0;
        }
    }

    printf("No repeating lowercase alphabet found.");

    return 0;
}
