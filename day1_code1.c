// Q1: Write a program to input two numbers and display their sum.


#include<stdio.h>
int main ()
{
int num1 , num2 , sum;    // declaring two variable of integer datatye one for their sum 
 
printf("Enter two no. for their sum :\n");
printf("NUM1 :");
scanf (" %d", &num1);    // Taking 1st input  from the user 
printf("NUM2 :");               
scanf (" %d", &num2);    // Taking 2nd input from the user 

sum = num1 + num2;

printf ("SUM = %d",sum);   // Displaying the output
 
return 0;

}   
