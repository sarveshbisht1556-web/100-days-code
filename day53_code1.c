/*
Sample Test Cases:
Input 1:
nums = [1,7,3,6,5,6]
Output 1:
3

Input 2:
nums = [1,2,3]
Output 2:
-1

Input 3:
nums = [2,1,-1]
Output 3:
0

*/
#include <stdio.h>

int main()
{
    int n, nums[100];
    int totalSum = 0;
    int leftSum = 0;
    int rightSum;

    // Input size of array
    scanf("%d", &n);

    // Input array
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
        totalSum += nums[i];
    }

    // Find pivot index
    for (int i = 0; i < n; i++)
    {
        rightSum = totalSum - leftSum - nums[i];

        if (leftSum == rightSum)
        {
            printf("%d", i);
            return 0;
        }

        leftSum += nums[i];
    }

    // No pivot index found
    printf("-1");

    return 0;
}