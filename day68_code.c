/*
Sample Test Cases:
Input 1:
nums1 = [0,3,2,4]
Output 1:
1

Input 2:
nums1 = [1,2,3]
Output 2:
0

Input 3:
nums1 = [0,4,3,1,5]
Output 3:
2

*/
#include <stdio.h>

int main()
{
    int n, nums[100];
    int actualSum = 0;
    int expectedSum, missing;

    // Input size of array
    scanf("%d", &n);

    // Input array
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
        actualSum += nums[i];
    }

    // Sum of numbers from 0 to n
    expectedSum = n * (n + 1) / 2;

    // Find missing number
    missing = expectedSum - actualSum;

    printf("%d", missing);

    return 0;
}