//Q60: Count positive, negative, and zero elements in an array.

/*
Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1

*/

#include <stdio.h>
int main() 
{
    int n;
    int i, negative = 0, positive = 0, zero=0;

    printf("Enter a numbers: ");   
    scanf("%d", &n);   //Taking input(size of array) from the user.
 
    int value[n];
    
    printf("Enter integer type elements:\n");

    for(i = 0; i < n; i++)
    {
     scanf("%d", &value[i]);   //Accepting input(elements) from the user. 
    }

    for(i = 0; i < n; i++)
     {
        if(value[i] > 0)  //Condition for positive values.
        {
            positive++;
        }
        if(value[i] < 0)  //Condition for negative values.           
        {
            negative++;
        }
        if(value[i]==0)   //condition for zero.
        {
            zero++;
        }
     }
  
    //Displaying results.

    printf("positive= %d, Negative= %d, zero= %d ", positive, negative, zero);  
    

    return 0;   //End of the program.
}
