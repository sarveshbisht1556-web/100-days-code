// Q58: Find the maximum and minimum element in an array.

/*
Sample Test Cases:
Input 1:
5
2 9 1 4 7
Output 1:
Max=9, Min=1

Input 2:
3
10 10 10
Output 2:
Max=10, Min=10

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
  int max= value[0];
  int min= value[0];
  
 for(int j=0; j<n; j++)
  {
   if(max<value[j])      // Condition for maximum element.
   {
    max= value[j];
   } 

   if(min>value[j])     //  Condition for minimum element.
   {
    min= value[j];  
   }
  }
 printf("max: %d, min: %d", max, min);   //Printing sum of the elements.

 return 0;
} 