// Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.


#include<stdio.h>

int main()
{
 float  length , breath , area , perimeter ;  // Declaring variables

  printf ("Enter the dimensions of the rectangle \n");    // Taking input from th user
  printf (" Enter length : ");         
  scanf  ("%2f" , &length);
  printf (" Enter breath :" );           
  scanf  ("%2f", &breath);
 


 area = length*breath ;             // Condition to find area of the rectangle
 perimeter = 2*(length + breath);   // Condition to find perimeter of the rectangle

  printf ("AREA : %2f\n",area);         // Displaying output
  printf ("PERIMETER: %f\n",perimeter);
 
return 0;                           

}