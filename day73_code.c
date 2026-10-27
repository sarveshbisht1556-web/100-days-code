/*
Sample Test Cases:
Input 1:
File: sample.txt (Content: Hello world\nThis is C programming)
Output 1:
Characters: 31
Words: 5
Lines: 2

*/
#include <stdio.h>

int main()
{
    FILE *fp;
    char ch;
    int characters = 0;
    int words = 0;
    int lines = 0;
    int inWord = 0;
    int hasContent = 0;

    // Open file in read mode
    fp = fopen("sample.txt", "r");

    if (fp == NULL)
    {
        printf("Error opening file!");
        return 1;
    }

    // Read file character by character
    while ((ch = fgetc(fp)) != EOF)
    {
        characters++;
        hasContent = 1;

        // Count new lines
        if (ch == '\n')
        {
            lines++;
        }

        // Check for word separator
        if (ch == ' ' || ch == '\n' || ch == '\t')
        {
            inWord = 0;
        }
        else if (inWord == 0)
        {
            words++;
            inWord = 1;
        }
    }

    // Account for the last line if it doesn't end with \n
    if (hasContent)
    {
        lines++;
    }

    fclose(fp);

    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}