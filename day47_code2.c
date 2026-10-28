//Q94: Find the longest word in a sentence.


#include <stdio.h>

int main()
{
    char str[200], longest[100];
    int i = 0, start = 0;
    int length = 0, maxLength = 0;
    int j;

    fgets(str, sizeof(str), stdin);    //to read Input sentence

    while (1)
    {
        // End of a word

        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\0')
        {
            if (length > maxLength)
            {
                maxLength = length;

               //to Copy longest word

                for (j = 0; j < length; j++)
                {
                    longest[j] = str[start + j];
                }

                longest[length] = '\0';
            }

            length = 0;
            start = i + 1;
        }
        else
        {
            length++;
        }

        if (str[i] == '\0')
            break;

        i++;
    }

    printf("%s", longest);

    return 0;
}