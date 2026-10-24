/*
Sample Test Cases:
Input 1:
Name: Rahul, Age: 23
Output 1:
File created successfully! Data written to info.txt

*/
#include <stdio.h>

int main()
{
    FILE *fp;
    char name[100];
    int age;

    // Open file in write mode
    fp = fopen("info.txt", "w");

    // Check if file was opened successfully
    if (fp == NULL)
    {
        printf("Error creating file!");
        return 1;
    }

    // Take input
    printf("Enter name: ");
    scanf(" %[^\n]", name);

    printf("Enter age: ");
    scanf("%d", &age);

    // Write data to file
    fprintf(fp, "Name: %s\n", name);
    fprintf(fp, "Age: %d\n", age);

    // Close the file
    fclose(fp);

    printf("File created successfully! Data written to info.txt");

    return 0;
}