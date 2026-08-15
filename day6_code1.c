// Q11: Write a program to input an integer and check whether it is even or odd using if–else.



#include<stdio.h>     //To include input and output functions.
int main()
{
 
 int x ;

 printf("Input a number to check whether its odd or even :");  
 
 scanf("%d",&x);     //Taking input from the user.

 if (x % 2 == 0)        //Condition for a number to be even (if the number divided by '2' left with remainder '0'). 
{
 printf("%d is even",x);    //Printing Even results.
}
 else
{
 printf("%d is odd",x);     //Else ,Odd result.
}
 return 0 ;

}