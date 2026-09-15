// Q68: Delete an element from an array.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5

*/
#include <stdio.h>
int main()
{
    int n, pos;
    
    // Read size of the array

    scanf("%d", &n);
    
    int arr[100];  // Large enough size for safety
    
    // Read array elements
 
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    // Read position to delete (0-based index)
    scanf("%d", &pos);
    
    // Shift elements to the left from the given position
 
    for (int i = pos; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    
    n--;  // Decrease size after deletion
    
    // Printing the new array
 
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
  return 0;  //End of the program.
}