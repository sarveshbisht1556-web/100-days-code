/*
Sample Test Cases:
Input 1:
Existing File: data.txt (Content before execution: Hello world)
User Input: This is appended text.
Output 1:
File updated successfully with appended text.

*/
#include <stdio.h>

int main()
{
    FILE *fp;
    char text[200];

    // Open file in append mode
    fp = fopen("data.txt", "a");

    if (fp == NULL)
    {
        printf("Error opening file!");
        return 1;
    }

    // Input new line of text
    fgets(text, sizeof(text), stdin);

    // Append text to the file
    fprintf(fp, "\n%s", text);

    // Close the file
    fclose(fp);

    printf("File updated successfully with appended text.");

    return 0;
}