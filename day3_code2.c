// Q6: Write a program to swap two numbers using a third variable.

#include<stdio.h>
int main()
{
int x , y , z;
 
printf(" Enter two number to swap them :\n");
 
scanf("%d" , & x);   // Taking 1st number (as input) from the user
scanf("%d" , & y);   // Taking 2nd number from the user

z = x ;          // Assigning 1st input to z variable 
x = y ;          // Now , Assigning 2nd input to x varibale 
y = z ;          // And finally assigning value z variable to y variable 

printf( "%d "" %d ",x,y);   // Displaying output

return 0;         
}