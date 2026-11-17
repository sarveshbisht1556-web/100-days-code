// Q140: Define a struct with enum Gender and print person's gender.

/*
Sample Test Cases:
Input 1:
Gender=MALE
Output 1:
Male

*/

#include <stdio.h>

// creating enum for gender
enum Gender
{
    MALE,
    FEMALE
};

// creating a structure with enum member
struct Person
{
    char name[50];
    enum Gender gender;
};

int main()
{
    struct Person p;

    // assigning values to structure members
    p.gender = MALE;

    // checking gender and printing it
    if (p.gender == MALE)
    {
        printf("Male\n");
    }
    else if (p.gender == FEMALE)
    {
        printf("Female\n");
    }

    return 0;
}