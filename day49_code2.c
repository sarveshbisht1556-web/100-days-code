//Q98: Print initials of a name with the surname displayed in full.


#include <stdio.h>

int main()
{
    char name[100];
    int i, lastSpace = -1;

  // to input full name

    fgets(name, sizeof(name), stdin);

  // to find the last space

    for (i = 0; name[i] != '\0' && name[i] != '\n'; i++)
    {
        if (name[i] == ' ')
        {
            lastSpace = i;
        }
    }

  // to print first initial

    printf("%c.", name[0]);

  // to print initials of middle names

    for (i = 0; i < lastSpace; i++)
    {
        if (name[i] == ' ' && i + 1 < lastSpace)
        {
            printf("%c.", name[i + 1]);
        }
    }

  // to print surname in full

    printf(" ");

    for (i = lastSpace + 1;name[i] != '\0' && name[i] != '\n';i++)
    {
        printf("%c", name[i]);
    }

    return 0;
}