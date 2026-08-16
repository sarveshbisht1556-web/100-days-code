// Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.

#include<stdio.h>
int main()
{
 char alpha;     //Declaring input variable for alphabets.

 printf("Enter the alphabet to check whether it is a consonant or a vowel : ");
 
 scanf("%c" , &alpha);      //Taking input from the user.

 // Simple condition for vowels.
 
 if ( alpha == 'a' || alpha =='e' || alpha =='i' || alpha =='o' || alpha =='u' || alpha == 'I' || alpha =='A' || alpha =='E' || alpha =='O' || alpha =='U')
{  
 printf("Vowel");   // Displaying output for vowels.
}
 else
{
 printf("Consonant");  //Displaying output for consonants.
}
return 0;

}
