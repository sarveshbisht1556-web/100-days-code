//Q88: Replace spaces with hyphens in a string.


#include <stdio.h>

int main()
{
    char str[100];
    int i = 0;

   fgets(str, sizeof(str), stdin);  //to Read the string, including spaces


  //to Replace spaces with hyphens

    while (str[i] != '\0')
    {
        if (str[i] == ' ')
        {
            str[i] = '-';
        }

        i++;
    }

    printf("%s", str);

    return 0;
}