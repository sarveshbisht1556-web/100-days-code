//Q97: Print the initials of a name.


#include <stdio.h>

int main()
{
    char name[100];
    int i = 0;

  // to input full name

    fgets(name, sizeof(name), stdin);

  // First character is an initial

    if (name[0] != ' ' && name[0] != '\n')
    {
        printf("%c.", name[0]);
    }

  // to find initials after spaces

    while (name[i] != '\0')
    {
        if (name[i] == ' ' &&
            name[i + 1] != ' ' &&
            name[i + 1] != '\n' &&
            name[i + 1] != '\0')
        {
            printf("%c.", name[i + 1]);
        }

        i++;
    }

    return 0;
}