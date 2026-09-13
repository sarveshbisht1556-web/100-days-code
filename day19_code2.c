//Q38: Write a program to find the sum of digits of a number.

/*
Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27

*/

#include <stdio.h>
int main() 
 {
    int n, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);   //Taking input form the user.

 //An iteration to find sum of digits of the input.
    while (n != 0)
   {
        digit = n % 10;
        sum = sum + digit;
        n = n / 10;
    }

    printf("Sum of digits = %d", sum);   //Displaying output.

    return 0;    //End of the program.
}
