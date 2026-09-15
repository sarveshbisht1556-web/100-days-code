// Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/

#include <stdio.h>
int main()
{
    int num;
    int digit, freq[10] = {0};  // Array to count digits 0–9
    
    // Read the number
    scanf("%d", &num);
    
    // Counting how many times each digit appears
    while (num > 0) 
   {
        digit = num % 10;     // Get the last digit
        freq[digit]++;        // Increase its count
        num = num / 10;       // Remove the last digit
    }
    
    // Find the digit with the highest count 

    int maxDigit = 0;
    int maxCount = freq[0];
    
    for (int i = 1; i < 10; i++)
    {
        if (freq[i] > maxCount)
        {
            maxCount = freq[i];
            maxDigit = i;
        }
     }
    
    // Printing the result 

    printf("%d\n", maxDigit);
    
    return 0;   //End of the program.
}