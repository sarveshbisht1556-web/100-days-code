//Q80: Multiply two matrices.

#include <stdio.h>

int main()
{
    int r1, c1;
    printf("Enter order of the 1st matrix:\n");
    
    scanf("%d %d", &r1, &c1);     //Taking input: no. of rows and columns of 1st matrix.

    int a1[r1][c1];
   
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            scanf("%d", &a1[i][j]);   //Taking input: elements of the 1st matrix.
        }
    }

    int r2, c2;
    printf("Enter order of the 2nd matrix:\n");
    
    scanf("%d %d", &r2, &c2);     //Taking input: no. of rows and columns of 2nd matrix.

    int a2[r2][c2];
   
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            scanf("%d", &a2[i][j]);   //Taking input: elements of the 2nd matrix.
        }
    }


  if(c1==r2)   //Condition for two matrix to get multiplied.
  {
   int c[r1][c2];

   printf("Product of the matrices:\n");

//Algorithm , to find product of two matrices.

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            c[i][j] = 0;

            for (int k = 0; k < c1; k++)
            {
                c[i][j] += a1[i][k] * a2[k][j];
            }
        }
    }

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
  }
  else
  {
   printf("Matrix can't be multiplied");  
  }
    return 0;
}
       
