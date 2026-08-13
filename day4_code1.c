// Q7: Write a program to swap two numbers without using a third variable.



#include<stdio.h>
int main ()
{
  int a , b ;  // Declaring two variables as per the question.

  printf("Enter two number :\n");

  scanf("%d  %d",&a,&b);      // Taking input form the user.
          
  printf("BEFORE SWAP : %d  %d\n",a,b);

  
 // Steps to swap value of 'a' and 'b' :  

  a = a + b ;         // Step 1   
  b = a - b ;         // Step 2
  a = a - b ;         // Step 3

  printf("AFTER SWAP : %d  %d",a,b);   // Displaying output. 
  
  return 0;
}