// Q66: Insert an element in a sorted array at the appropriate position.

/*
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/

#include <stdio.h>
int main()
{
    int n, x;
    
    // Read size of the array

    scanf("%d", &n);
    
    int arr[100];  // Large enough size for safety
    
    // Read array elements (already sorted)

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    // Read the element to insert

    scanf("%d", &x);
    
    // Find the correct position

    int pos = n;  // Default: insert at the end

    for (int i = 0; i < n; i++)
   {
        if (x < arr[i])
       {
            pos = i;
            break;
        }
    }
    
    // Shifting elements to the right

    for (int i = n; i > pos; i--) 
    {
        arr[i] = arr[i - 1];
    }
    
    // Inserting the new element

    arr[pos] = x;
    n++;  // Increase size
    
    // Printing the new array

    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    
   return 0;   //End of the program.
}