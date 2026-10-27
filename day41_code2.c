//Q82: Print each character of a string on a new line.

 
#include<stdio.h>
int main()
{
 
 char string[20];
 printf("Enter a word :\n");

 scanf("%s", string);

 int count=0;

 printf("Output:\n");
 
 while(string[count]!='\0')
 {
  printf("%c\n", string[count]);
  count++;
 }
 
 return 0;
}

 