/*
Sample Test Cases:
Input 1:
s = "anagram", t = "nagaram"
Output 1:
Anagram

Input 2:
s = "rat", t = "car"
Output 2:
Not Anagram

*/
#include <stdio.h>

int main()
{
    char s[100], t[100];
    int freq[26] = {0};
    int i;

    // Input two strings
    scanf("%s", s);
    scanf("%s", t);

    // Increase frequency for characters in s
    for (i = 0; s[i] != '\0'; i++)
    {
        freq[s[i] - 'a']++;
    }

    // Decrease frequency for characters in t
    for (i = 0; t[i] != '\0'; i++)
    {
        freq[t[i] - 'a']--;
    }

    // Check frequencies
    for (i = 0; i < 26; i++)
    {
        if (freq[i] != 0)
        {
            printf("Not Anagram");
            return 0;
        }
    }

    printf("Anagram");

    return 0;
}