// Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

/*
Sample Test Cases:
Input 1:
FAILURE
Output 1:
Operation failed

*/

#include <stdio.h>

// creating enum for operation status
enum Status
{
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main()
{

    // setting the current status
    enum Status result = FAILURE;

    // checking status and printing message
    switch (result)
    {
    case SUCCESS:
        printf("Operation successful\n");
        break;

    case FAILURE:
        printf("Operation failed\n");
        break;

    case TIMEOUT:
        printf("Operation timed out\n");
        break;

    default:
        printf("Unknown status\n");
    }

    return 0;
}