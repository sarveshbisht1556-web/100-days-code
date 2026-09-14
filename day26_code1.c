/*Q51: Write a program to print the following pattern:
    5
   45
  345
 2345
12345
*/

/*
Sample Test Cases:
Input 1:

Output 1:
    5
   45
  345
 2345
12345

*/

#include<stdio.h>
int main()
{
 for(int i=1; i<=5; i++)  //Outer loop for moving control to next line. 
   {
    for(int j=5-i; j>=1; j--)  //1st Inner loop printing space.
     {
      printf(" ");
     }
    
     for(int k= 6-i; k<=5; k++) //2nd Inner loop for printing number pattern.
      {
       printf("%d", k);
      }
     printf("\n");
    }
  return 0;   //End of the program.
}
