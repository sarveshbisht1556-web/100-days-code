//Q75: Add two matrices.


#include<stdio.h>
int main()
{
 int mat1[10][10];
 int mat2[10][10];

 int l,n;

 printf("Enter rows and column size of matrices:\n");
 scanf("%d %d", &l, &n);        //Taking input for order of the matrices.

 printf("Enter elements of first matrix:\n");
 for(int i=0; i<l; i++)
 {
   for(int j=0; j<n; j++)
   {
     scanf("%d", &mat1[i][j]);   //Taking input: elements for 1st matrix.
   }
 }

 printf("Enter elements of second matrices:\n");
 for(int i=0; i<l; i++)
 {
   for(int j=0; j<n; j++)
   {
     scanf("%d", &mat2[i][j]);    //Taking input: elements for 2nd matrix. 
   }
 }
 
 printf("Sum of the matrices:\n");

 for(int i=0; i<l; i++)
 {
  for(int j=0; j<n; j++)
   {
     printf("%d ", mat1[i][j] + mat2[i][j]);  //Displaying sum of the matices.
   }
  printf("\n");
 }
 
 return 0;  //end of the program.
}
 
     
 