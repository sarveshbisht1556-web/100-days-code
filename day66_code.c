/*
Sample Test Cases:
Input 1:
nums = [2,7,11,15], target = 9
Output 1:
0 1

Input 2:
nums = [3,2,4], target = 6
Output 2:
1 2

Input 3:
nums = [3,3], target = 6
Output 3:
0 1

*/
#include <stdio.h>

int main()
{
    int n, nums[100], target;

    // Input size of array
    scanf("%d", &n);

    // Input array
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    // Input target
    scanf("%d", &target);

    // Find two elements whose sum equals target
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                printf("%d %d", i, j);
                return 0;
            }
        }
    }

    // No solution found
    printf("-1 -1");

    return 0;
}