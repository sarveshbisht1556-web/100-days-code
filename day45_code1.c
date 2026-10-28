//Q89: Count frequency of a given character in a string.


#include <stdio.h>

int main()
{
    char str[100];
    char ch;
    int i = 0, count = 0;
 
    fgets(str, sizeof(str), stdin);  //to Input the string

  //to Input character to search

    scanf("%c", &ch);

  //to Count frequency

    while (str[i] != '\0' && str[i] != '\n')
    {
        if (str[i] == ch)
        {
            count++;
        }

        i++;
    }

    printf("%d", count);

    return 0;
}