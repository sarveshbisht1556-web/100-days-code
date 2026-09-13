//Q37: Write a program to find the LCM of two numbers.

/*
Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/

#include <stdio.h>
int main()
 {
    int a, b, x, y, hcf, lcm;  //Declaring variables.

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);         //Taking input form the user.

    x = a;
    y = b;

// Iteration to find HCF.
  
    while (y != 0)
    {
        int temp = y;
        y = x % y;
        x = temp;
    }

    hcf = x;
    lcm = (a * b) / hcf;   // General method to find lcm of two real no.

    printf("LCM = %d", lcm);    //Displaying output.

    return 0;
}
