//Q77: Check if the elements on the diagonal of a matrix are distinct.

#include<stdio.h>
int main()
{

 int n;
 int mat[10][10];

 printf("Enter order of the matrix:\n");
 scanf("%d", &n);   //User input: order of the matrix.
 
 printf("Enter elements of the matrix:\n");
 
 for(int i=0; i<n; i++)
  {
   for(int j=0; j<n; j++)
    {
      scanf("%d", &mat[i][j]);   //User input: element of the matrix defined.
    } 
  } 

 int diagonal[n];
 int f =0;

 for(int i=0; i<n; i++)
  {
   for(int j=0; j<n; j++)
    {
      if(i==j)
      {
        diagonal[f]=mat[i][j];   //Storing diagonal elements to later compare them.
        f++;
      }
    }
  }
 int flag=0;

//Iteration: to check each element if, they are similar or not.

  for(int c=0; c<n; c++)
  {
   for(int i=0; i<n; i++)
   {
     if(i==c)
     {  
      continue;
     } 

     if(diagonal[i]!=diagonal[c])
     {
      continue;
     }
  
     else
     {
      flag =1;
      break;
     } 
   }
  }

 if(flag==0)
  {
   printf("True");  //Output: if, each diagonal elements are different.  
  }
 else
 {
   printf("False"); //Output: if, each diagonal elements are not different.  
 }
 return 0;  //End of the program.
} 
  
       