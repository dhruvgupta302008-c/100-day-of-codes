/*
Q99 (Strings)
Change the date format from dd/04/yyyy to dd-Apr-yyyy.
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char date[20];
    char dd[3], yyyy[5];

    printf("Enter date in dd/04/yyyy format: ");
    scanf("%s", date);

    dd[0] = date[0];
    dd[1] = date[1];
    dd[2] = '\0';

    yyyy[0] = date[6];
    yyyy[1] = date[7];
    yyyy[2] = date[8];
    yyyy[3] = date[9];
    yyyy[4] = '\0';

    printf("%s-Apr-%s", dd, yyyy);

    return 0;
}
