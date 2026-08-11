// Q4: Write a program to calculate the area and circumference of a circle given its radius.



#include<stdio.h>
int main ()
{
 float  circum , radius, area;  // Declaring variables
 
printf (" Enter Radius of the circle: ");  // Getting input from the user
scanf (" %f", &radius);
 
circum = 2*3.14*radius;     // Condition to find circumference of the circle 
area = 3.14*radius*radius;  // Condition to find area of the circle
 
printf (" AREA :%.2f\n",area);
printf (" CIRCUMFERENCE : %.2f",circum);   // Displaying output
 
return 0;
}