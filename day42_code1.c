//Q83: Count vowels and consonants in a string.


#include <stdio.h>

int main()
{
    char str[100];
    int i = 0, vowels = 0, consonants = 0;

    fgets(str, sizeof(str), stdin);    //To read input from the user.
    
//iteration to check and count vowels and consonants.
    while (str[i] != '\0')
    {
        // Check if character is an alphabet
        if ((str[i] >= 'a' && str[i] <= 'z') ||
            (str[i] >= 'A' && str[i] <= 'Z'))
        {
            // Check for vowel
            if (str[i] == 'a' || str[i] == 'e' ||
                str[i] == 'i' || str[i] == 'o' ||
                str[i] == 'u' || str[i] == 'A' ||
                str[i] == 'E' || str[i] == 'I' ||
                str[i] == 'O' || str[i] == 'U')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }

        i++;
    }

    printf("Vowels=%d, Consonants=%d", vowels, consonants);   //Dispalying output.

    return 0;
}