/*
Sample Test Cases:
Input 1:
nums1 = [1,3,3,4]
Output 1:
3

Input 2:
nums1 = [1,2,2]
Output 2:
2

Input 3:
nums1 = [0,4,1,1,5]
Output 3:
1

*/
#include <stdio.h>

int main()
{
    int n, nums[100];
    int visited[1000] = {0};
    int repeated = -1;

    // Input size
    scanf("%d", &n);

    // Input array
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    // Find repeated element in one iteration
    for (int i = 0; i < n; i++)
    {
        if (visited[nums[i]] == 1)
        {
            repeated = nums[i];
            break;
        }

        visited[nums[i]] = 1;
    }

    printf("%d", repeated);

    return 0;
}