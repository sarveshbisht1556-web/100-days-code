//Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 2.58

Input 2:
5
Output 2:
Approximate sum: 4.36

*/

#include <stdio.h>
int main()
 {
    int n, i;
    float sum = 1;

    printf("Enter number of terms(n): ");
    scanf("%d", &n);  //Taking input form the user.

  if(n==1)
  {
    printf( "sum: %d", sum);
  }
  else
 {
  //Iteration to calculate sum of n terms of the series.
    for (i = 2; i <= n; i++)
    {
     sum = sum + (float)(2 * i - 1) / (2 * i);
    }

    printf("Approximate sum = %.2f", sum);    //Displaying output.
  }
  return 0;
}

 
 

