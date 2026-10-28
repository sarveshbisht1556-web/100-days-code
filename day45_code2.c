//Q90: Toggle case of each character in a string.


#include <stdio.h>

int main()
{
    char str[100];
    int i = 0;

    fgets(str, sizeof(str), stdin);  //Accpets input form the user.

    while (str[i] != '\0' && str[i] != '\n')
    {
      //from Lowercase to uppercase 

        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }

      //from Uppercase to lowercase

        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }

        i++;
    }

    printf("%s", str);

    return 0;
}