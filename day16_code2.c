// Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/

#include<stdio.h>
int main()
{
 int n, reverse=0, digit;

 printf("Enter a number to find it's reverse: ");
 scanf("%d", &n);    //Taking input from user. 
 
 int original = n;     //Storing input, to later checking the no. is palindrome or not.  

  //Iterartion to reverse a number.

     while (n != 0) {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }
    if(reverse == original)    //Condition for Palindrome no.
    {
    printf("Palindrome");
    }
    else                        //Condition  else, Not Plaindrome
    {
     printf("Not Palindrome"); 
    }
    return 0;
}