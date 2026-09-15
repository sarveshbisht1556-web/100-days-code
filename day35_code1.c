//Q69: Find the second largest element in an array.

/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/

#include <stdio.h>
int main()
{
    int n;
    
    // Read size of the array

    scanf("%d", &n);
    
    int arr[100];  // Large enough size
    
    // Read array elements

    for (int i = 0; i < n; i++)
   {
        scanf("%d", &arr[i]);
    }
    
    // Initialize largest and second largest

    int largest = arr[0];
    int secondLargest = -1;  // Assume no second largest yet
    
    for (int i = 1; i < n; i++)
   {
        if (arr[i] > largest) 
        {
            secondLargest = largest;   // Update second largest
            largest = arr[i];          // Update largest
        } 
        else if (arr[i] > secondLargest && arr[i] < largest) 
        {
            secondLargest = arr[i];    // Update second largest
        }
    }
    
    // Printing result

    if (secondLargest != -1) 
    {
        printf("%d\n", secondLargest);
    } 
    else 
    {
        printf("No second largest element\n");
    }
    
   return 0;  //End of the program.
}