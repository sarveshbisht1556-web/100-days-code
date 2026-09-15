//Q67: Insert an element in an array at a given position.

/*
Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40

*/

#include <stdio.h>
int main() 
{
    int n, pos, x;
    
    // Read size of the array
    scanf("%d", &n);
    
    int arr[100];  // Large enough size for safety
    
    // Reading array elements

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    // Read position and element to insert
    scanf("%d %d", &pos, &x);
    
    // Shifting elements to the right from the given position

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
    
   return 0;
}