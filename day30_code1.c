//Q59: Count even and odd numbers in an array.

/*
Sample Test Cases:
Input 1:
6
1 2 3 4 5 6
Output 1:
Even=3, Odd=3

Input 2:
4
2 4 6 8
Output 2:
Even=4, Odd=0

*/

#include <stdio.h>
int main() 
{
    int n;
    int i, even = 0, odd = 0;

    printf("Enter a numbers:\n");   
    scanf("%d", &n);   //TAking input(size of array) from the user.
 
    int value[n];
    
    printf("Enter integer type elements:\n");

    for(i = 0; i < n; i++)
    {
     scanf("%d", &value[i]);   //Accepting input(elements) from the user. 
    }

    for(i = 0; i < n; i++)
     {
        if(value[i] % 2 == 0)  //Condition for even no.
        {
            even++;
        }
        else                 //else for odd.
        {
            odd++;
        }
     }
  
  //Displaying results.

    printf("Even = %d, ", even);  
    printf("Odd = %d", odd);

    return 0;   //End of the program.
}
