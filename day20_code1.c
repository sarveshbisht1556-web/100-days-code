//Q39: Write a program to find the product of odd digits of a number.

/*
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/

#include<stdio.h>
int main()
{
 int n, digit, product=1;   //Declaring variable and initializing, product variable for: no ood digit in input.
 
  printf("Enter a no. to find product of its odd digits: ");
  scanf("%d", &n);      //Taking input form the user.
  
// Iteration to find product of odd digits in input.
  while(n!=0)
  {
    digit=n%10;
   
    if(n%2!=0)
     {
       product=product*digit;
     }
    
    n=n/10;
  }
 
 printf("Product of odd digit: %d", product);   //Displaying output.

return 0;
}