// Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.



#include<stdio.h>
int main ()
{

 int x;          //Declaring input variable.

 printf("Enter a number to check whether its positive, negative or zero :");
 
 scanf("%d", &x);   //Taking input from the user.
 
 if (x >= 0)        //Condition for positive or zero input
 {
  if (x == 0){
  printf("Zero");
             }
  else{
  printf("Positive");
      } 
 }
 else                    //Else , for negative input 
  printf("Negative");
 
 
 return 0;

 }