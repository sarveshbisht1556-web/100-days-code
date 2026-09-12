// Q28: Write a program to print the product of even numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
4
Output 1:
8 (2 * 4)

Input 2:
6
Output 2:
48 (2 * 4 * 6)

*/

#include<stdio.h>
int main()
{
 int n;
 int sum =0; 
 printf("Enter a number 'n' to find sum till 'n' even number: ");
 scanf("%d", &n); //Taking input from the user.
 
// Using loop to find sum of even no. till n.
 
 for(int i=1; i<=n; i++)
 {
   sum= sum + (2*i);
 }
   
  printf("Sum of n even numbers: %d", sum);
 
 return 0;
}