//Q87: Count spaces, digits, and special characters in a string.


#include <stdio.h>

int main()
{
    char str[100];
    int i = 0;
    int spaces = 0, digits = 0, special = 0;

    fgets(str, sizeof(str), stdin);  //To read input from the user.

    while (str[i] != '\0' && str[i] != '\n')
    {
        //to Check for space

        if (str[i] == ' ')
        {
            spaces++;
        }

        //to Check for digit

        else if (str[i] >= '0' && str[i] <= '9')
        {
            digits++;
        }

        //is to Check for special character

        else if (!((str[i] >= 'a' && str[i] <= 'z') ||
                   (str[i] >= 'A' && str[i] <= 'Z')))
        {
            special++;
        }

        i++;
    }

    printf("Spaces=%d, Digits=%d, Special=%d", spaces, digits, special);

    return 0;
}