//Q79: Perform diagonal traversal of a matrix.


#include <stdio.h>

int main()
{
    int r, c;
    printf("Enter order of the matrix:\n");
    
    scanf("%d %d", &r, &c);     //Taking input: no. of rows and columns.

    int a[r][c];
   
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);   //Taking input: elements of the matrix.
        }
    }
   
     printf("\nDiagonal travesal: \n");

//Iteration to exract and display matrix in traversal diagonal order from the original matrix.

    for (int k = 0; k < r + c - 1; k++)
    {
        int temp[100], count = 0;

        for (int i = 0; i < r; i++)
        {
            int j = k - i;

            if (j >= 0 && j < c)
            {
                temp[count++] = a[i][j];
            }
        }

        if (k % 2 == 0)
        {
            for (int i = count - 1; i >= 0; i--)
            {
                printf("%d ", temp[i]);
            }
        }
        else
        {
            for (int i = 0; i < count; i++)
            {
                printf("%d ", temp[i]);
            }
        }
    }

    return 0;    //End of the progarm.
}