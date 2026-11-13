// Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

/*
Sample Test Cases:
Input 1:
GUEST
Output 1:
Welcome Guest!

*/

#include <stdio.h>

// creating enum for user roles
enum Role
{
    ADMIN,
    USER,
    GUEST
};

int main()
{

    // setting the current user role
    enum Role role = GUEST;

    // checking role and displaying message
    switch (role)
    {
    case ADMIN:
        printf("Welcome Admin!\n");
        break;

    case USER:
        printf("Welcome User!\n");
        break;

    case GUEST:
        printf("Welcome Guest!\n");
        break;

    default:
        printf("Invalid Role\n");
    }

    return 0;
}
