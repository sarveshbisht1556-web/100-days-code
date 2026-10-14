/*
Sample Test Cases:
Input 1:
arr[] = [2, 3, -8, 7, -1, 2, 3]
Output 1:
11

Input 2:
arr[] = [-2, -4]
Output 2:
-2

Input 3:
arr[] = [5, 4, 1, 7, 8]
Output 3:
25

*/
#include <stdio.h>

int main()
{
    int n, arr[100];
    int currentSum, maxSum;

    // Input size of array
    scanf("%d", &n);

    // Input array
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Initialize with first element
    currentSum = arr[0];
    maxSum = arr[0];

    // Kadane's Algorithm
    for (int i = 1; i < n; i++)
    {
        // Either start a new subarray or continue previous one
        if (arr[i] > currentSum + arr[i])
        {
            currentSum = arr[i];
        }
        else
        {
            currentSum = currentSum + arr[i];
        }

        // Update maximum sum
        if (currentSum > maxSum)
        {
            maxSum = currentSum;
        }
    }

    printf("%d", maxSum);

    return 0;
}