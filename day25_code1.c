/*Q49: Write a program to print the following pattern:
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
 for(int i=1; i<=5; i++) //Outer loop for moving control to next line.
  {
   for(int j=6-i; j<=5; j++) //Inner loop for printing number pattern in each row.
   {
    printf("%d", j); 
   }
   printf("\n");
  }   
 return 0;  //End of the program.
}