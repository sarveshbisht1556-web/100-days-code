// Q13: Write a program to input a year and check whether it is a leap year or not using conditional statements.


#include<stdio.h>
int main ()
{
 int year ;                       // Declaring input variable
 
 printf("Enter a year to check whether it's leap year or not : ");

 scanf ("%d", &year);                                    // Taking input from the user.

 if( (year%100 != 0 && year%4 == 0 ) || year%400 ==0)    // Condition for a year to be a leap year.
{  
 printf("Leap year");                                    // Output for leap year.
}
 else
{ 
 printf("Not a leap year");                              // Output for , not a leap year. 
}

return 0;

}