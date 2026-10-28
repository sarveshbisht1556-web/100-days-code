//Q86: Check if a string is a palindrome.


#include <stdio.h>

int main()
{
    char str[100];
    int length = 0, i;
    int palindrome = 1;

    fgets(str, sizeof(str), stdin);

  //to Find length of the string

    while (str[length] != '\0' && str[length] != '\n')
    {
        length++;
    }

  //to Compare characters from both ends

    for (i = 0; i < length / 2; i++)
    {
        if (str[i] != str[length - 1 - i])
        {
            palindrome = 0;
            break;
        }
    }

  //to Print result

    if (palindrome == 1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not palindrome");
    }

    return 0;
}