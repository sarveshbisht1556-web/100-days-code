// Q62: Reverse an array without taking extra space.

/*
Sample Test Cases:
Input 1:
4
1 2 3 4
Output 1:
4 3 2 1

*/

#include <stdio.h>
int main() 
{
    int n;
    int i;

    printf("Enter a numbers:");
    scanf("%d", &n);  //Taking input(no. of elements) from the user.
   
    int array[n];

    printf("Enter elements:\n");
    
  //Accepting elements form the user.

    for(i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Reverse order:\n");

 //Reversing th eorder of input.

    for(i = n-1; i >= 0; i--)
    {
        printf("%d ", array[i]);
    }

    return 0;    //End of the program.
}
