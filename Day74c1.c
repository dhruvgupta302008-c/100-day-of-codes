/*
Q124 (File Handling)

Take two filenames from the user - a source file and a destination file.
Copy all the content from the source file to the destination file
using fgetc() and fputc().
*/

#include <stdio.h>

int main()
{
    FILE *source, *destination;
    char sourceName[100], destinationName[100];
    char ch;

    printf("Enter source file name: ");
    scanf("%s", sourceName);

    printf("Enter destination file name: ");
    scanf("%s", destinationName);

    source = fopen(sourceName, "r");

    if(source == NULL)
    {
        printf("Source file could not be opened.");
        return 1;
    }

    destination = fopen(destinationName, "w");

    if(destination == NULL)
    {
        printf("Destination file could not be opened.");
        fclose(source);
        return 1;
    }

    while((ch = fgetc(source)) != EOF)
    {
        fputc(ch, destination);
    }

    fclose(source);
    fclose(destination);

    printf("File copied successfully.");

    return 0;
}
