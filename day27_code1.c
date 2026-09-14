/*Q53: Write a program to print the following pattern:

*
***
*****
*******
*********
*******
*****
***
*

*/

#include<stdio.h>
int main()
{
 for(int i=1; i<=5; i++) //for printing pattern of first 5 row.
   {
    for(int j=1; j<=(2*i)-1; j++)
     { 
      printf("*");
     }
   
    printf("\n");
   }
 
 for(int k=4; k>=1; k--)   //for printing pattern of the remaining rows.
   { 
    for(int l=1; l<=(2*k)-1; l++)
     {
      printf("*");
     }
    printf("\n");
   }
 return 0;
}  