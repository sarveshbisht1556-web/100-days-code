//Q100: Print all sub-strings of a string.


#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, j, len, first = 1;

    scanf("%s", str);  //Taking input

    len = strlen(str);

    for (i = 0; i < len; i++)
    {
        for (j = i; j < len; j++)
        {
            if (!first)
             printf(",");

            for (int k = i; k <= j; k++)
            {
                printf("%c", str[k]);
            }

            first = 0;
        }
    }

    return 0;
}