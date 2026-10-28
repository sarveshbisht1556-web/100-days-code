//Q91: Remove all vowels from a string.


#include <stdio.h>

int main()
{
    char str[100];
    int i, j = 0;

    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++)
    {
      //to Check if the character is NOT a vowel

        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' &&
            str[i] != 'u' && str[i] != 'A' && str[i] != 'E' && str[i] != 'I' &&
            str[i] != 'O' && str[i] != 'U')
        {
            str[j] = str[i];
            j++;
        }
    }

  //to End the new string

    str[j] = '\0';

    printf("%s", str);

    return 0;
}