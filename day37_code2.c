//Q74: Find the transpose of a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
1 4
2 5
3 6

*/

#include <stdio.h>
int main() 
{
    int rows, cols;
    
    // Reading number of rows and columns

    scanf("%d %d", &rows, &cols);
    
    int matrix[10][10];      // Original matrix
    int transpose[10][10];   // Transposed matrix
    
    // Reading matrix elements

    for (int i = 0; i < rows; i++) 
   {
        for (int j = 0; j < cols; j++) 
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    // Computing transpose
 
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            transpose[j][i] = matrix[i][j];
        }
    }
    
    // Printing transpose

    for (int i = 0; i < cols; i++) 
   {
        for (int j = 0; j < rows; j++) 
        {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
    
  return 0;  //End of the program.
}