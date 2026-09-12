// Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

/*
Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3

*/

#include<stdio.h>
int main()
{
 
 int a, b;
 char sign;
 
  printf("Enter two no. to preform mathematical operation(+,-,*,/,%) on:\n");

  scanf("%d %d", &a, &b);       //Taking two input from the user to perform operation on.
 
  printf("Enter following sign to perform the respective operation : +, -, *, / or % \n");

  scanf(" %c", &sign);           //Taking input from user to perform which type of mathematical operation.


 //Using switch-case for respective output based on the sign used.
  
  switch(sign)
  {
   case '+':
   printf("Sum: %d", a+b);
   break;
 
   case '-':
   printf("Difference: %d", a-b);
   break;

   case '*':
   printf("Product: %d", a*b);
   break;
  
   case '/':
   if(b!=0){
   printf("Quotient: %.2f", (float)a/b);}
   else{
   printf("denominator should not be 0");}
   break;
  
   case '%':
   if(b!=){
   printf("Remainder: %d", a%b);}
   else{
   printf("denominator should not be 0");}
   break;
   
   default:
   printf("Invalid sign used");   //For invalid input from the user.
  }
   return 0;
 }
   