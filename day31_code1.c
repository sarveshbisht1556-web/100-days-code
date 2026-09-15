// Q61: Search for an element in an array using linear search.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1

*/

#include <stdio.h>
int main()
{
    int n;
    int i, search, found = 0;

    printf("Enter a numbers:");
    scanf("%d", &n);   //Taking input(no. of elements).
   
    int array[n];

    printf("Enter elements:\n");


   //Taking input(elements).

    for(i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Enter number to search: ");   
    scanf("%d", &search);   //Taking input(the element to be searched) from the user


  //Iteration, to search the input element amongst.
    for(i = 0; i < n; i++)
    {
        if(array[i] == search) 
        {
            found = 1;
            break;
        }
    }

    if(found == 1)
    {
        printf("found at index %d", i);
    } 
    else
    {
        printf("-1");
    }

    return 0;
}
