//Q35: Write a program to print all factors of a given number.

/*
Sample Test Cases:
Input 1:
6
Output 1:
1 2 3 6

Input 2:
10
Output 2:
1 2 5 10

*/
#include<stdio.h>
int main()
{
 int n;
  
 printf("Enter a no. to find its factors: ");

 scanf("%d", &n);    /Taking  input form the user.

 if(n<1)   //Condition for inavlid input, as we have not defined factors for: n<1. 
 {
  printf("Invalid input");
  return 0;
 }
 
 for(int i=1; i<=n; i++)   //Iteration for finding factors and displaying them.
  {
    if(n%i==0)
    {
      printf("%d ", i);
    }
  }
 
 return 0;
} 
  
