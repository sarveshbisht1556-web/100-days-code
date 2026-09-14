//Q43: Write a program to check if a number is a strong number.

/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/

#include<stdio.h>
int main ()
{
 int n;
 int x ,sum=0 ;
  
  printf("Enter a number to whether it is strong number or not: ");
  scanf("%d", &n);    //Taking input from the user.

  int original =n;         //Storing input value for checking condition later.

//Iteration for, sum of the factorial of the digit of the input.
  while(n!=0)
  {
    int fact=1;
    x=n%10;
    for(int i=1; i<=x; i++)
     {   
      fact=fact*i;
     }  
      sum= sum + fact;
       
      n=n/10;
   }
 
   if(sum==original)       //Condition to check original value is strong number or not
    {
      printf("Strong number");
    }
   
   else
    {
      printf("Not strong number");   //else, Displaying : Not strong number.
    }
  return 0;    //End of the program.
}
      