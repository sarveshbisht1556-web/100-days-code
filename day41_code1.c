//Q81: Count characters in a string without using built-in length functions.

#include<stdio.h>
int main()
{
 
 char string[20];
 printf("Enter a word :\n");

 scanf("%s", string);
 
 int count=0;
 
 while(string[count]!='\0')
 {
   count++;
 }
 
 printf("Length = %d", count);
 
 return 0;
}  
 