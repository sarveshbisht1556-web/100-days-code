//Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/

#include <stdio.h>
int main() 
{
    int n, original, first, last;
    int divisor = 1;
    int middle, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;   //Storing original input for further use.

   // iteration to calculate place value.
    while (n >= 10)
    {
        n = n / 10;
        divisor = divisor * 10;
    }

    first = n;      //first place value.
    last = original % 10;   //last place value.

    middle = (original % divisor) / 10;  //To find middle place values.

    result = last * divisor + middle * 10 + first;   //Sum up the results.

    printf("Number after swapping = %d", result);  //displaying output.

    return 0;
}
