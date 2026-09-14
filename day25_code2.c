/*Q50: Write a program to print the following pattern:
*****
 ****
  ***
   **
    *
*/
/*
Sample Test Cases:
Input 1:

Output 1:
*****
 ****
  ***
   **
    *
*/

#include<stdio.h>
int main()
{
 for(int i=0; i<=4; i++)  //Outer loop for moving control to next line. 
   {
    for(int j=1; j<=i; j++)  //1st Inner loop printing space.
     {
      printf(" ");
     }
    
     for(int k= 5-i; k>=1; k--) //2nd Inner loop for printing pattern'*'.
      {
       printf("*");
      }
     printf("\n");
    }
  return 0;   //End of the program.
}
  
     
