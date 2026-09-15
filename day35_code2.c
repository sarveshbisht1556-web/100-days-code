//Q70: Rotate an array to the right by k positions.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/

#include <stdio.h>
int main() 
{
    int n, k;
    
    // Read size of the array

    scanf("%d", &n);
    
    int arr[100];  // Large enough size
    
    // Read array elements

    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    
    // Read number of positions to rotate

    scanf("%d", &k);
    
    // Handle cases where k > n

    k = k % n;
    
    // Temporary array to store rotated result

    int rotated[100];
    
    // Copy last k elements to the front

    for (int i = 0; i < k; i++) 
    {
        rotated[i] = arr[n - k + i];
    }
    
    // Copy the remaining elements
 
    for (int i = 0; i < n - k; i++) 
    {
        rotated[k + i] = arr[i];
    }
    
    // Print rotated array

    for (int i = 0; i < n; i++) 
    {
        printf("%d ", rotated[i]);
    }
    
  return 0;   //End of the program. 
}
