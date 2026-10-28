/*
Sample Test Cases:
Input 1:
Source File: source.txt (Content: Learning C File Handling)
Output 1:
File copied successfully to destination.txt

*/
#include <stdio.h>

int main()
{
    FILE *source, *destination;
    char sourceName[100], destinationName[100];
    int ch;

    // Input filenames
    scanf("%s", sourceName);
    scanf("%s", destinationName);

    // Open source file in read mode
    source = fopen(sourceName, "r");

    if (source == NULL)
    {
        printf("Source file could not be opened!");
        return 1;
    }

    // Open destination file in write mode
    destination = fopen(destinationName, "w");

    if (destination == NULL)
    {
        printf("Destination file could not be created!");
        fclose(source);
        return 1;
    }

    // Copy character by character
    while ((ch = fgetc(source)) != EOF)
    {
        fputc(ch, destination);
    }

    // Close both files
    fclose(source);
    fclose(destination);

    printf("File copied successfully to %s", destinationName);

    return 0;
}