//Q34: Write a program to check if a number is prime.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/

#include<stdio.h>
int main()
{
 int n;
 int count =0;

 printf("Enter a number to check whether it is prime or not: ");

 scanf("%d", &n);   //TAking input from the user.
  
if(n<=1)      //Condition for input less than equals to 1. 
{
 printf("Not Prime");
 return 0;
} 
 
 // Condition for a number to be prime or not

 for(int i=2; i<=(n/2); i++)
  {
    if(n%i==0) 
    {
     count++;
     break;
    }
     
  }
 
   if(count==0)
   {
    printf("Prime");   // Condition for Displaying: Prime.
   }
 
   else
  {
   printf("NOt Prime");   //Condition for Displaying: Not Prime.
  }
 
 return 0;
}