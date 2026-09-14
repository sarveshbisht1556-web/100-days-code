//Q46: Write a program to print the following pattern:
/* *****
   *****
   *****
   *****
   ***** */


#include<stdio.h>
int main()
{
 for(int i=1; i<=5; i++)   //Outer loop for to jumping onto the next row.
  {
    for(int j=1; j<=5; j++)  //Inner loop for printing patterns in each row.
     {
       printf("*");   
     }
 
   printf("\n");
  }
 return 0;    //End of the program.
}