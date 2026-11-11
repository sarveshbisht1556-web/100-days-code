// Q133: Create an enum for months and print how many days each month has.

/*
Sample Test Cases:
Input 1:
FEB
Output 1:
28 or 29 days

*/

#include <stdio.h>

// creating enum for months
enum Month
{
    JAN,
    FEB,
    MAR,
    APR,
    MAY,
    JUN,
    JUL,
    AUG,
    SEP,
    OCT,
    NOV,
    DEC
};

int main()
{

    // selecting a month
    enum Month m = FEB;

    // checking the month and printing days
    switch (m)
    {
    case JAN:
    case MAR:
    case MAY:
    case JUL:
    case AUG:
    case OCT:
    case DEC:
        printf("31 days\n");
        break;

    case APR:
    case JUN:
    case SEP:
    case NOV:
        printf("30 days\n");
        break;

    case FEB:
        printf("28 or 29 days\n");
        break;

    default:
        printf("Invalid month\n");
    }

    return 0;
}