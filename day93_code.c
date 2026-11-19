// Q143: Find and print the student with the highest marks.

/*
Sample Test Cases:
Input 1:
3 students: Ravi 101 95, Sita 102 85, Aman 103 88
Output 1:
Topper: Ravi (Marks: 95)

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
    struct Student s[3];
    int i, topper = 0;

    // taking details of 3 students
    for (i = 0; i < 3; i++)
    {
        printf("Enter Name: ");
        scanf("%s", s[i].name);

        printf("Enter Roll No: ");
        scanf("%d", &s[i].roll_no);

        printf("Enter Marks: ");
        scanf("%d", &s[i].marks);
    }

    // finding the student with highest marks
    for (i = 1; i < 3; i++)
    {
        if (s[i].marks > s[topper].marks)
        {
            topper = i;
        }
    }

    // displaying topper details
    printf("Topper: %s (Marks: %d)\n",
           s[topper].name,
           s[topper].marks);

    return 0;
}