// Q146: Create Employee structure with nested Date structure for joining date and print details.

/*
Sample Test Cases:
Input 1:
Employee: Raj | ID: 11 | Joining Date: 12 05 2020
Output 1:
Name: Raj | ID: 11 | Joining Date: 12/05/2020

*/

#include <stdio.h>

// creating a structure for date
struct Date
{
    int day;
    int month;
    int year;
};

// creating employee structure with nested date structure
struct Employee
{
    char name[50];
    int id;
    struct Date joiningDate;
};

int main()
{
    struct Employee emp;

    // taking employee details as input
    printf("Enter Name: ");
    scanf("%s", emp.name);

    printf("Enter ID: ");
    scanf("%d", &emp.id);

    printf("Enter Joining Date (dd mm yyyy): ");
    scanf("%d %d %d",
          &emp.joiningDate.day,
          &emp.joiningDate.month,
          &emp.joiningDate.year);

    // displaying employee details
    printf("\nName: %s | ID: %d | Joining Date: %02d/%02d/%d\n",
           emp.name,
           emp.id,
           emp.joiningDate.day,
           emp.joiningDate.month,
           emp.joiningDate.year);

    return 0;
}