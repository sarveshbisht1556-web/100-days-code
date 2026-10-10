/*
Sample Test Cases:
Input 1:
arr[100, 200, 300, 400] = , k = 2
Output 1:
700

Input 2:
arr[1, 4, 2, 10, 23, 3, 1, 0, 20] = , k = 4
Output 2:
39

Input 3:
arr[100, 200, 300, 400] = , k = 1
Output 3:
400

*/
#include <stdio.h>

int main()
{
    int n, arr[100], k;
    int sum = 0, maxSum;

    // Input size of array
    scanf("%d", &n);

    // Input array
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Input k
    scanf("%d", &k);

    // Check for invalid k
    if (k <= 0 || k > n)
    {
        printf("-1");
        return 0;
    }

    // Calculate sum of first k elements
    for (int i = 0; i < k; i++)
    {
        sum += arr[i];
    }

    maxSum = sum;

    // Slide the window
    for (int i = k; i < n; i++)
    {
        sum = sum + arr[i] - arr[i - k];

        if (sum > maxSum)
        {
            maxSum = sum;
        }
    }

    printf("%d", maxSum);

    return 0;
}