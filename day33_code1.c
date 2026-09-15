// Q65: Search in a sorted array using binary search.

/*
Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1

*/
 
#include <stdio.h>
int main() 
{
    int n, key;
    
    // Read size of the array

    scanf("%d", &n);
    
    int arr[n];
    
    // Read array elements (sorted)

    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    
    // Read the element to search

    scanf("%d", &key);
    
    // Binary search

    int low = 0, high = n - 1;
    int foundIndex = -1;        // Default: not found
    
    while (low <= high) 
   {
        int mid = (low + high) / 2;  // Middle index
        
        if (arr[mid] == key)
        {
            foundIndex = mid;   // Found
            break;
        } 
        else if (arr[mid] < key)
        {
            low = mid + 1;      // Search right half
        } 
        else 
        {
            high = mid - 1;     // Search left half
        }
    }
    
    // Print result
    if (foundIndex != -1)
    {
        printf("Found at index %d\n", foundIndex);
    }
    else
    {
        printf("-1\n");
    }
    
   return 0;
}

 