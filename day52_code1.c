
/*
Sample Test Cases:
Input 1:
arr = [1, 2, 8, 10, 11, 12, 19], x = 5
Output 1:
2

Input 2:
arr = [1, 2, 8, 10, 11, 12, 19], x = 20
Output 2:
-1

Input 3:
arr = [1, 1, 2, 8, 10, 11, 12, 19], x = 0
Output 3:
0

Input 4:
arr = [1, 1, 2, 8, 10, 11, 12, 19], x = 2
Output 4:
2

*/
#include <stdio.h>

int main()
{
    int n, arr[100], x;
    int low, high, mid;
    int result = -1;

    // Input size of array
    scanf("%d", &n);

    // Input sorted array
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Input x
    scanf("%d", &x);

    low = 0;
    high = n - 1;

    // Binary search for ceil
    while (low <= high)
    {
        mid = (low + high) / 2;

        if (arr[mid] >= x)
        {
            result = mid;

            // Search on left side for smaller
            // possible ceil / first occurrence
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    printf("%d", result);

    return 0;
}