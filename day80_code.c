// Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.

/*
Sample Test Cases:
Input 1:
Student 1 → Name: Asha, Roll: 101, Marks: 85; Student 2 → Name: Ravi, Roll: 102, Marks: 92
Output 1:
Name: Asha | Roll: 101 | Marks: 85
Name: Ravi | Roll: 102 | Marks: 92

*/

#include <stdio.h>

struct Student
{
    char name[50];
    int roll;
    int marks;
};

int main()
{
    FILE *fp;
    struct Student s;

    // opening file in write mode
    fp = fopen("students.txt", "w");

    if (fp == NULL)
    {
        printf("Unable to create file.\n");
        return 1;
    }

    // storing student records in file using fprintf
    fprintf(fp, "Asha 101 85\n");
    fprintf(fp, "Ravi 102 92\n");

    // closing file after writing
    fclose(fp);

    // opening file again in read mode
    fp = fopen("students.txt", "r");

    if (fp == NULL)
    {
        printf("Unable to open file.\n");
        return 1;
    }

    // reading records one by one and displaying them
    while (fscanf(fp, "%s %d %d", s.name, &s.roll, &s.marks) == 3)
    {
        printf("Name: %s | Roll: %d | Marks: %d\n",
               s.name, s.roll, s.marks);
    }

    // closing the file
    fclose(fp);

    return 0;
}