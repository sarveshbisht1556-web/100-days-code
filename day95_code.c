// Q145: Return a structure containing top student's details from a function.

/*
Sample Test Cases:
Input 1:
3 students: Riya 101 89, Karan 102 96, Meena 103 92
Output 1:
Top Student: Karan | Roll: 102 | Marks: 96

*/

#include <stdio.h>

// creating a structure for student details
struct Student
{
    char name[50];
    int roll_no;
    int marks;
};

// function to find and return top student
struct Student getTopStudent(struct Student s[], int n)
{
    int i, top = 0;

    // checking all students to find highest marks
    for (i = 1; i < n; i++)
    {
        if (s[i].marks > s[top].marks)
        {
            top = i;
        }
    }

    // returning topper's structure
    return s[top];
}

int main()
{
    struct Student s[3], topper;
    int i;

    // taking input for 3 students
    for (i = 0; i < 3; i++)
    {
        printf("Enter Name: ");
        scanf("%s", s[i].name);

        printf("Enter Roll No: ");
        scanf("%d", &s[i].roll_no);

        printf("Enter Marks: ");
        scanf("%d", &s[i].marks);
    }

    // calling function to get top student
    topper = getTopStudent(s, 3);

    // displaying topper details
    printf("\nTop Student: %s | Roll: %d | Marks: %d\n",
           topper.name,
           topper.roll_no,
           topper.marks);

    return 0;
}