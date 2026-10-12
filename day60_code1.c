/*
Sample Test Cases:
Input 1:
arr[1, 2, 3, 1, 4, 5, 2, 3, 6] = , k = 3
Output 1:
3 3 4 5 5 5 6

Input 2:
arr[5, 1, 3, 4, 2] = , k = 1
Output 2:
5 1 3 4 2

*/
#include <stdio.h>

int main()
{
    int n, arr[100], k;
    int max;

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

    // Traverse each window of size k
    for (int i = 0; i <= n - k; i++)
    {
        max = arr[i];

        // Find maximum in current window
        for (int j = i + 1; j < i + k; j++)
        {
            if (arr[j] > max)
            {
                max = arr[j];
            }
        }

        printf("%d", max);

        if (i < n - k)
        {
            printf(" ");
        }
    }

    return 0;
}