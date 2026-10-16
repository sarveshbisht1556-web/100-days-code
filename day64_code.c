/*
Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/
#include <stdio.h>

int main()
{
    char s[100];
    int maxLength = 0;

    scanf("%s", s);

    // Select starting position
    for (int i = 0; s[i] != '\0'; i++)
    {
        int visited[256] = {0};
        int length = 0;

        // Check characters from position i
        for (int j = i; s[j] != '\0'; j++)
        {
            // If character is already present, stop
            if (visited[(unsigned char)s[j]] == 1)
            {
                break;
            }

            visited[(unsigned char)s[j]] = 1;
            length++;

            // Update maximum length
            if (length > maxLength)
            {
                maxLength = length;
            }
        }
    }

    printf("%d", maxLength);

    return 0;
}