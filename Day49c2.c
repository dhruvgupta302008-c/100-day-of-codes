/*
Q98 (Strings)
Print initials of a name with the surname displayed in full.
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char name[100];
    int i, lastSpace = -1;

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    name[strcspn(name, "\n")] = '\0';

    for(i = 0; name[i] != '\0'; i++)
    {
        if(name[i] == ' ')
            lastSpace = i;
    }

    printf("Result: ");

    if(lastSpace == -1)
    {
        printf("%s", name);
    }
    else
    {
        printf("%c. ", name[0]);

        for(i = 1; i < lastSpace; i++)
        {
            if(name[i - 1] == ' ' && name[i] != ' ')
                printf("%c. ", name[i]);
        }

        printf("%s", &name[lastSpace + 1]);
    }

    return 0;
}
