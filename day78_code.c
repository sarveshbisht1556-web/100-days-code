//Q128: Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.

/*
Sample Test Cases:
Input 1:
File: text.txt (Content: Welcome to C language)
Output 1:
Vowels: 8
Consonants: 10

*/

#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char ch;
    int vowels = 0, consonants = 0;

    // opening the file in read mode
    fp = fopen("text.txt", "r");

    // checking if file opened properly
    if (fp == NULL) {
        printf("Unable to open file.\n");
        return 1;
    }

    // reading one character at a time from file
    while ((ch = fgetc(fp)) != EOF) {

        // converting character to lowercase
        ch = tolower(ch);

        // checking if character is a letter
        if (isalpha(ch)) {

            // checking for vowels
            if (ch == 'a' || ch == 'e' || ch == 'i' ||
                ch == 'o' || ch == 'u') {
                vowels++;
            }
            else {
                // if not vowel, then it is consonant
                consonants++;
            }
        }

        // digits, spaces and special symbols are ignored
    }

    // closing the file after reading
    fclose(fp);

    // displaying the results
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}