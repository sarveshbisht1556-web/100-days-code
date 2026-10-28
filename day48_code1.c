//Q95: Check if one string is a rotation of another.


#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    char temp[200];

    scanf("%s", str1);
    scanf("%s", str2);

  //to lengths must be equal

    if (strlen(str1) != strlen(str2))
    {
        printf("Not rotation");
        return 0;
    }

  //to create str1 + str1

    strcpy(temp, str1);
    strcat(temp, str1);

  //to check whether str2 exists inside temp

    if (strstr(temp, str2) != NULL)
    {
        printf("Rotation");
    }
    else
    {
        printf("Not rotation");
    }

    return 0;
}