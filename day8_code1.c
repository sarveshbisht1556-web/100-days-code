/* Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.*/


#include<stdio.h>

#include<ctype.h>     // Header file to help check character ( uppercase and lowercase ) and to transform alphabet from uppercase to lowercase or vice versa.
int main ()
{
 char input;
 
 printf("Enter a character to check if its is uppercase alphabet , lowercase alphabet , a digit or a special character : ");

 scanf ("%c", &input);              // Taking input form the user.

 if (isalpha(input))                // Condition for alphabets.
{
  if (isupper(input))
  {
  printf("Uppercase alphabet");     // Within (if) , check for uppercase alphabet.
  }
  else {
  printf("Lowercase alphabet");     // else , within (if) , check for lowercase.
  }
}
 else if(isdigit(input))            // To check input for digit.
 {
  printf("Digit");
 }
else
{
 printf("Special character");      // else, for special character
}
 
 return 0;
}
 
 
 