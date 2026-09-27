/*
Q97 (Strings)
Print the initials of a name.
*/

#include <stdio.h>

int main()
{
    char name[100];
    int i;

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    printf("Initials: ");

    if(name[0] != ' ')
        printf("%c ", name[0]);

    for(i = 1; name[i] != '\0'; i++)
    {
        if(name[i - 1] == ' ' && name[i] != ' ')
        {
            printf("%c ", name[i]);
        }
    }

    return 0;
}
