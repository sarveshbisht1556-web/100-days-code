// Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.


#include <stdio.h>     

int main()
 {
    int totalSec, hours, min, sec ;       // Declaring variables

    printf("Enter time in seconds: ");
    scanf("%d", &totalSec);               // Input from the user 

    hours = totalSec / 3600;              // 3600 seconds in an hour
    min = (totalSec % 3600) / 60;         // seconds conversion to minutes
    sec = totalSec % 60;                  // leftover seconds

    printf("\n %d:%d:%d ", hours, min, sec);     // Displaying output

    return 0;
  }