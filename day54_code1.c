/*
Sample Test Cases:
Input 1:
n = 8
Output 1:
6

Input 2:
n = 1
Output 2:
1

Input 3:
n = 4
Output 3:
-1

*/
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int x = 1; x <= n; x++)
    {
        int leftSum = x * (x + 1) / 2;
        int rightSum = n * (n + 1) / 2
                     - (x - 1) * x / 2;

        if (leftSum == rightSum)
        {
            printf("%d", x);
            return 0;
        }
    }

    printf("-1");

    return 0;
}