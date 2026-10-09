/*
Sample Test Cases:
Input 1:
nums = [1,2,3,4]
Output 1:
[24,12,8,6]

Input 2:
nums = [-1,1,0,-3,3]
Output 2:
[0,0,9,0,0]

*/
#include <stdio.h>

int main()
{
    int n, nums[100], answer[100];

    // Input size
    scanf("%d", &n);

    // Input array
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    // Calculate product except self
    for (int i = 0; i < n; i++)
    {
        int product = 1;

        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                product = product * nums[j];
            }
        }

        answer[i] = product;
    }

    // Print answer array
    printf("[");

    for (int i = 0; i < n; i++)
    {
        printf("%d", answer[i]);

        if (i < n - 1)
        {
            printf(",");
        }
    }

    printf("]");

    return 0;
}