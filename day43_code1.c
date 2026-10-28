//Q85: Reverse a string.


#include <stdio.h>

int main()
{
    char str[100];
    int length = 0, i;

    fgets(str, sizeof(str), stdin);

    //To Find length of the string

    while (str[length] != '\0' && str[length] != '\n')
    {
        length++;
    }

    //To Print the string in reverse order

    for (i = length - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }

    return 0;
}