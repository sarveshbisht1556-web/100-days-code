// Q29: Write a program to calculate the factorial of a number.

/*
Sample Test Cases:
Input 1:
5
Output 1:
120

Input 2:
3
Output 2:
6

*/

#include<stdio.h>
int main()
{
 int n;
 int fact=1;
 
 printf("Enter a number 'n' to find it's factorial: ");
 scanf("%d", &n);  // Taking input form the user.
 

// Condition for valid input 
 if(n>=0)   
{
  if(n==0)   // Factorial of zero.
 { printf("factorial of 0: 1");} 
 
 else
{
 for(int i=1; i<=n; i++) // Factorail of 'n' natural number.
 { 
   fact=fact*i;
 }
 
   printf("Factorial of %d: %d", n, fact);
 }}
 
 else{
 printf("Invalid input number should be greater than 0");}  //Displaying result for invalid input.

 return 0;
}
 