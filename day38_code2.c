//Q76: Check if a matrix is symmetric.

#include<stdio.h>
int main()
{

 int n;
 int mat[10][10];
 int transpose[10][10];

 printf("Enter order of the matrix:\n");
 scanf("%d", &n);   //User input: order of the matrix.
 
 printf("Enter elements of the matrix:\n");
 
 for(int i=0; i<n; i++)
  {
   for(int j=0; j<n; j++)
    {
      scanf("%d", &mat[i][j]);   //User input: element of the matrix defined.

      transpose[j][i]=mat[i][j]; //Transpose of the matrix. 
    }
  }
 
 int count=0;


//Iteration for a matrix to be symmetric matrix.

for(int i=0; i<n; i++)
  {
   for(int j=0; j<n; j++)
    {
     if(transpose[i][j]!=mat[i][j])
     {
       count=1;
       break;
     }
    }
  }
 
 if(count==0)
{
 printf("Symmetric");   //Output for symmetric matrix. 
} 
 else
{
 printf("Not Symmetric");
}
return 0;  //End pf the program.
} 