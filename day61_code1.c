/*
Sample Test Cases:
Input 1:
arr[] = [-8, 2, 3, -6, 10], k = 2
Output 1:
-8 0 -6 -6

Input 2:
arr[] = [12, -1, -7, 8, -15, 30, 16, 28], k = 3
Output 2:
-1 -1 -7 -15 -15 0

Input 3:
arr[] = [12, 1, 3, 5], k = 3
Output 3:
0 0

*/
#include <stdio.h>

int main()
{
    int n, arr[100], k;
    int firstNegative;

    // Input size of array
    scanf("%d", &n);

    // Input array
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Input window size
    scanf("%d", &k);

    // Check for invalid k
    if (k <= 0 || k > n)
    {
        printf("-1");
        return 0;
    }

    // Check each window of size k
    for (int i = 0; i <= n - k; i++)
    {
        firstNegative = 0;

        // Search for first negative number
        for (int j = i; j < i + k; j++)
        {
            if (arr[j] < 0)
            {
                firstNegative = arr[j];
                break;
            }
        }

        printf("%d", firstNegative);

        if (i < n - k)
        {
            printf(" ");
        }
    }

    return 0;
}