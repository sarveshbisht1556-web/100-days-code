// Q16: Write a program to input three numbers and find the largest among them using if–else.



#include<stdio.h>

int main()
{
 int a , b , c;         // Declaring variables.
 
 printf("Enter three numbers to find the largest among them :\n");

 scanf("%d %d %d" , &a, &b, &c);      // Taking input form the user.
 
 if (a > b && a > c)                  // Condition for input 'a' to be greatest amongst.
 {
  printf("Largest is %d", a);
 }
 else if (b > a && b > c)             // Condition for input 'b' to be greatest amongst.
{ 
 printf("Largest is %d", b);
}
 else 
{
 printf("Largest is %d", c);         // Else , input 'c' to be greatest amongst.
}
return 0 ;
}   