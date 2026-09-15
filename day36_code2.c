//Q72: Find the sum of all elements in a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
21

*/

#include <stdio.h>
int main() 
{
    int rows, cols;
    
    // Read number of rows and columns
 
    scanf("%d %d", &rows, &cols);
    
    int matrix[10][10];  // Assuming max size 10x10
    int sum = 0;         // Variable to store total sum
    
    // Reading matrix elements and calculating sum of the elements.

    for (int i = 0; i < rows; i++) 
   {
        for (int j = 0; j < cols; j++) 
        {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];  // Add each element to sum
        }
    }
    
    // Printing the sum

    printf("%d\n", sum);
    
  return 0; //End of the program.
}