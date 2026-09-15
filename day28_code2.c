// Q56: Read and print elements of a one-dimensional array.

/*
Sample Test Cases:
Input 1:
3
10 20 30
Output 1:
10 20 30

Input 2:
5
1 2 3 4 5
Output 2:
1 2 3 4 5

*/
#include<stdio.h>
int main()
{
 int n;

 printf("Enter a number: ");
 scanf("%d", &n); //Taking input from the user to declare no. of elements in the array.

 int value[n];  //Declaring interger type array.

printf("Enter integer type elements :\n");
 
 for(int i=0; i<n; i++)
  {
   scanf("%d", &value[i]);    //Taking input(elements) from the user.
  }
  
 for(int j=0; j<n; j++)
  {
   printf("%d ", value[j]);   //Printing elements.
  }
 return 0;
} 