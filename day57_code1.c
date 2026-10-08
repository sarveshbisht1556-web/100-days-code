/*
Sample Test Cases:
Input 1:
arr = [1, 3, 2, 4]
Output 1:
-1, -1, 3, -1

Input 2:
arr = [6, 8, 0, 1, 3]
Output 2:
-1, -1, 8, 8, 8

Input 3:
arr = [1, 2, 3, 5]
Output 3:
-1, -1, -1, -1

Input 4:
arr = [5, 4, 3, 1]
Output 4:
-1, 5, 4, 3

*/
#include <stdio.h>

int main()
{
    int n, arr[100];
    int previousGreater;

    // Input size
    scanf("%d", &n);

    // Input array
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Find previous greater element
    for (int i = 0; i < n; i++)
    {
        previousGreater = -1;

        // Search towards the left
        for (int j = i - 1; j >= 0; j--)
        {
            if (arr[j] > arr[i])
            {
                previousGreater = arr[j];
                break;
            }
        }

        // Print comma-separated output
        if (i > 0)
        {
            printf(", ");
        }

        printf("%d", previousGreater);
    }

    return 0;
}