//Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/

#include<stdio.h>
int main()
{
 int n, digit, arm=0;
 
 printf("Enter a no. to check if it is Armstrong or not: ");
 scanf("%d", &n);  // Taking input form the user.

 int original = n; // Storing input, to later check it, whether armstrong or not.
 
//Iteration for sum of cube of digit of 'n'. 
 while(n!=0)
{
  digit=n%10;
  arm = arm + digit*digit*digit;
  n= n/10;
}

if(original==arm)    //Condition for displaying: Armstrong.
{
 printf("Armstrong");
}
 
else             // Condition for displaying: Not Armstrong. 
{
 printf("Not Armstrong");
}

return 0;
}


 
 