// Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

/*
Sample Test Cases:
Input 1:
3 3 3
Output 1:
Equilateral

Input 2:
3 3 4
Output 2:
Isosceles

Input 3:
2 3 4
Output 3:
Scalene

*/

#include<stdio.h>
int main()
{
 float a, b, c ;
 
  printf("Enter the side of the triangle:\n");
  scanf("%f  %f  %f", &a, &b, &c);                //Taking input(sides) from the user.
 
 if((a+b>c && b+c>a) && c+a>b)    //Condition to from a triangle.
{ 

 if (a==b && b==c)                //Condition for a triangle to be an Equilateral. 
 {
  printf("Equilateral");
 }
  else if ((a==b || a==c) || b==c)     //Condition for an Isosceles triangle.
 {
  printf("Isosceles");
 }
 else                                // Else the trangle will be Scalene.
 {
  printf("Scalene");
 }

}
 else                                // For invalid input.
{
 printf("Not a valid triangle");
}
 return 0;
}