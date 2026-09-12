// Q27: Write a program to print the sum of the first n odd numbers.

/*
Sample Test Cases:
Input 1:
3
Output 1:
9

Input 2:
5
Output 2:
25

*/

#include<stdio.h>
int main()
{
 int n;
 int sum =0; 
 printf("Enter a number 'n' to find sum till 'n' odd number: ");
 scanf("%d", &n); //Taking input from the user.
 
// Using loop to find sum of no. till n.
 
 for(int i=1; i<=n; i++)
 {
   sum= sum + (2*i)-1;
 }
   
  printf("Sum of n odd numbers: %d", sum);
 
 return 0;
}