/* Q47: Write a program to print the following pattern:

*
**
***
****
***** */

/*
Sample Test Cases:
Input 1:

Output 1:
*
**
***
****
*****

*/

#include<stdio.h>
int main()
{
  
 for(int i=1; i<=5; i++) //Outer loop for, going onto to next row.
  {
   for(int j=1; j<=i; j++) //Inner loop for, printing '*' equals to respective row no.
   {
    printf("*");
   }
  
   printf("\n");
  }
 return 0;   //End of the program.

}