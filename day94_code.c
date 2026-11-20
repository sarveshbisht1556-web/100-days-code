// Q144: Write a function that accepts a structure as parameter and prints its members.

/*
Sample Test Cases:
Input 1:
Student: Neha 104 92
Output 1:
Name: Neha | Roll: 104 | Marks: 92

*/

#include <stdio.h>

// creating a structure for student details
struct Student
{
    char name[50];
    int roll_no;
    int marks;
};

// function to display structure members
void displayStudent(struct Student s)
{

    // printing student details
    printf("Name: %s | Roll: %d | Marks: %d\n",
           s.name, s.roll_no, s.marks);
}

int main()
{
    struct Student s;

    // assigning values to structure members
    printf("Enter Name: ");
    scanf("%s", s.name);

    printf("Enter Roll No: ");
    scanf("%d", &s.roll_no);

    printf("Enter Marks: ");
    scanf("%d", &s.marks);

    // calling function and passing structure
    displayStudent(s);

    return 0;
}