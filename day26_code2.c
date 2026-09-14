/*Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*

*/

#include<stdio.h>
int main()
{
  for(int i=1; i<=5; i++)     //Outer loop for taking control to third line and for pattern.
   {
     if(i>3)          
     {
     for(int k=1; k<=(2*(6-i)-1); k++) //Pattern after the symmetry.
       { 
        printf("*\n");      
       }
     }
    else
     {
    for(int j=1; j<=(2*i)-1; j++)   //Pattern before symmetry.
       { 
        printf("*\n");
       }
     }
 
     printf("\n\n");  //Moving control to third line.
   }
return 0;   //End of the program. 
}
   
 