// Q142: Store details of 5 students in an array of structures and print all.

/*
Sample Test Cases:
Input 1:
Details of 5 students (Name, Roll, Marks)
Output 1:
Tabular list of all 5 students with their details

*/

#include <stdio.h>

// creating a structure for student details
struct Student
{
    char name[50];
    int roll_no;
    int marks;
};

int main()
{
    struct Student s[5];
    int i;

    // taking details of 5 students
    for (i = 0; i < 5; i++)
    {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Roll No: ");
        scanf("%d", &s[i].roll_no);

        printf("Marks: ");
        scanf("%d", &s[i].marks);
    }

    // printing all student details
    printf("\nStudent Details:\n");
    printf("---------------------------------\n");
    printf("Name\tRoll\tMarks\n");
    printf("---------------------------------\n");

    for (i = 0; i < 5; i++)
    {
        printf("%s\t%d\t%d\n",
               s[i].name,
               s[i].roll_no,
               s[i].marks);
    }

    return 0;
}