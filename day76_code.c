/*
Sample Test Cases:
Input 1:
Filename: sample.txt (File Exists: Yes)
Output 1:
File opened successfully.
(Displays file content)

Input 2:
Filename: nofile.txt (File Exists: No)
Output 2:
Error: File does not exist!

*/
#include <stdio.h>

int main()
{
    FILE *fp;
    char filename[100];
    char ch;

    // Input filename
    scanf("%s", filename);

    // Try to open file in read mode
    fp = fopen(filename, "r");

    // Check if file exists
    if (fp == NULL)
    {
        printf("Error: File does not exist!");
        return 1;
    }

    printf("File opened successfully.\n");

    // Read and display file content
    while ((ch = fgetc(fp)) != EOF)
    {
        printf("%c", ch);
    }

    // Close the file
    fclose(fp);

    return 0;
}