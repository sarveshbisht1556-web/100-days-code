//Q78: Find the sum of main diagonal elements for a square matrix.

#include<stdio.h>
int main()
{

 int n;
 int mat[10][10];

 printf("Enter order of the square matrix:\n");
 scanf("%d", &n);   //User input: order of the matrix.
 
 printf("Enter elements of the matrix:\n");
 
 for(int i=0; i<n; i++)
  {
   for(int j=0; j<n; j++)
    {
      scanf("%d", &mat[i][j]);   //User input: element of the matrix defined.
    } 
  } 

 int sum =0;

 for(int i=0; i<n; i++)
  {
   for(int j=0; j<n; j++)
    {
      if(i==j)
      {
       sum= sum+mat[i][j];   //Sum of diagonal elements.
      }
    }
  }

  printf("Sum of the diagonal elements is = %d", sum);  //Displaying output.

 return 0;  //end of the program.
}
 