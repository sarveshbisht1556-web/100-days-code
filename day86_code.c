// Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

/*
Sample Test Cases:
Input 1:
ADD 10 20
Output 1:
30

*/

#include <stdio.h>

// creating enum for menu choices
enum Operation
{
    ADD,
    SUBTRACT,
    MULTIPLY
};

int main()
{
    int num1 = 10, num2 = 20;

    // selecting the operation
    enum Operation choice = ADD;

    // performing operation using switch
    switch (choice)
    {
    case ADD:
        printf("%d\n", num1 + num2);
        break;

    case SUBTRACT:
        printf("%d\n", num1 - num2);
        break;

    case MULTIPLY:
        printf("%d\n", num1 * num2);
        break;

    default:
        printf("Invalid choice\n");
    }

    return 0;
}