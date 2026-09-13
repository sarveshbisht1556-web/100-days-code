//Q42: Write a program to check if a number is a perfect number.

/*
Sample Test Cases:
Input 1:
6
Output 1:
Perfect number

Input 2:
10
Output 2:
Not perfect number

*/

#include<stdio.h>
int main()
{
 int n; 
 int sum=0;
 printf("Enter a number to find whether it is prefect number or not: "); 
 scanf("%d", &n);   //Taking input form the user.

 //Calculating sum of the factors of the input.
 for(int i=1 ; i<=n/2; i++)
  {
    if(n%i==0)
     {
      sum=sum+i;
     }
  }
  
 if(sum==n)    //Condition for perfect number.
 {
  printf("Perfect");
 }
  
 else
 {
  printf("Not perfect number"); //else, display "Not perfect number".
 }
 return 0;
}