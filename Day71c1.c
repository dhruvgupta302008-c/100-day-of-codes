/*
Q121 (File Handling)

Write a C program that creates a text file named info.txt in write mode.
The program should take the user's name and age as input, and write them
to the file using fprintf(). After writing, display a message confirming
that the data was successfully saved.
*/

#include <stdio.h>

int main()
{
    FILE *fp;

    char name[50];
    int age;

    fp = fopen("info.txt", "w");

    if(fp == NULL)
    {
        printf("Unable to create file.");
        return 1;
    }

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    fprintf(fp, "Name: %s\n", name);
    fprintf(fp, "Age: %d\n", age);

    fclose(fp);

    printf("Data successfully saved to info.txt.");

    return 0;
}
