// Q73: Find the sum of each row of a matrix and store it in an array.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

*/

#include <stdio.h>
int main() 
{
    int rows, cols;
    
    // Reading number of rows and columns

    scanf("%d %d", &rows, &cols);
    
    int matrix[10][10];   // Assuming max size 10x10
    int rowSum[10];       // Array to store sum of each row
    
    // Reading matrix elements

    for (int i = 0; i < rows; i++) 
   {
        rowSum[i] = 0;  // Initialize sum for this row
        for (int j = 0; j < cols; j++) 
        {
            scanf("%d", &matrix[i][j]);
            rowSum[i] += matrix[i][j];  // Add element to row sum
        }
    }
    
    // Printing the sum of each row

    for (int i = 0; i < rows; i++) 
    {
        printf("%d ", rowSum[i]);
    }
    
   return 0; //End of the program.
}