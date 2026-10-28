//Q96: Reverse each word in a sentence without changing the word order.


#include <stdio.h>

int main()
{
    char str[200];
    int i = 0, start, end, j;

    //to input sentence
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0')
    {
        //to skip spaces

        if (str[i] == ' ')
        {
            printf(" ");
            i++;
            continue;
        }

      //to find the beginning of the word

        start = i;

      //Find the end of the word

        while (str[i] != ' ' &&
               str[i] != '\n' &&
               str[i] != '\0')
        {
            i++;
        }

        end = i - 1;

        //to print the word in reverse

        for (j = end; j >= start; j--)
        {
            printf("%c", str[j]);
        }

        //to stop at newline

        if (str[i] == '\n')
            break;
    }

    return 0;
}