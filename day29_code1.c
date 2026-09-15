// Q57: Find the sum of array elements.

/*
Sample Test Cases:
Input 1:
4
2 4 6 8
Output 1:
20

Input 2:
3
1 1 1
Output 2:
3

*/

#include<stdio.h>
int main()
{
 int n;
 int sum =0;
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
   sum = sum + value[j]; //calculating sum of the elements.
  }
 printf("\n%d", sum);   //Printing sum of the elements.

 return 0;
} 