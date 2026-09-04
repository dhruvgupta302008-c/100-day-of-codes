#include <stdio.h>

/*
Q52 (Nested Loops without Arrays/Strings)

Write a program to print the following pattern:

*

*
*
*
*

*
*
*
*

*
*
*

*
*/

int main()
{
    int i, j;

    for(i = 1; i <= 4; i++)
    {
        if(i == 1 || i == 4)
        {
            printf("*\n");
        }
        else
        {
            for(j = 1; j <= 4; j++)
            {
                printf("*\n");
            }
        }

        printf("\n");
    }

    return 0;
}
