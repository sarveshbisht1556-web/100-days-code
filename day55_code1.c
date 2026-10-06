/*
Sample Test Cases:
Input 1:
nums = [3,2,3]
Output 1:
3

Input 2:
nums = [2,2,1,1,1,2,2]
Output 2:
2

Input 3:
nums = [2,2,1,1,1,2,2,3]
Output 3:
-1

*/
#include <stdio.h>

int main()
{
    int n, nums[100];
    int count;

    // Input size
    scanf("%d", &n);

    // Input array
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    // Check frequency of each element
    for (int i = 0; i < n; i++)
    {
        count = 0;

        for (int j = 0; j < n; j++)
        {
            if (nums[i] == nums[j])
            {
                count++;
            }
        }

        // Check majority condition
        if (count > n / 2)
        {
            printf("%d", nums[i]);
            return 0;
        }
    }

    // No majority element
    printf("-1");

    return 0;
}