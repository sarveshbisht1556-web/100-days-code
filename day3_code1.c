// Q5: Write a program to convert temperature from Celsius to Fahrenheit.


#include<stdio.h>       // Header file to include input and output functions
int main()
{
float celsius, farenhiet;  // Declaring variables                     
  
printf ( " Enter temperature in celsius :");
  scanf (" %f", &celsius);                     // Taking input from the user
  
  farenhiet = (celsius*(9/5))+32;              // Condition or general formula for celsius to farenhiet conversion
  
printf("\nFarenhiet = %.2f",farenhiet);        // Displaying output
   return 0;
}
