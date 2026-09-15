//Q71: Read and print a matrix.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
Output 1:
1 2
3 4

*/

#include <stdio.h>
int main() 
{
    int rows, cols;
    
    // Read number of rows and columns

    scanf("%d %d", &rows, &cols);
    
    int matrix[10][10];  // Assuming max size 10x10 for simplicity
    
    // Read matrix elements

    for (int i = 0; i < rows; i++) 
   {
        for (int j = 0; j < cols; j++) 
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    // Printing matrix elements

    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");  // Moving to next row
    }
    
  return 0;  //End of the program.
}

