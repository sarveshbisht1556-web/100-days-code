// Q8: Write a program to find and display the sum of the first n natural numbers.


#include<stdio.h>    // To include input and output functions.
int main ()
{
  int sum , n;       // Declaring variables.
 
  printf("Enter a natural number 'n' to get the sum of first 'n' natural number , n : ");

  scanf("%d",&n);    //Taking input form the user.
  
  sum = n/2*(n+1) ;  //Greneral formula fro the sum of n natural numbers.
  
  printf("\nSUM = %d",sum);  // Displaying output
 
  return 0;
}   
