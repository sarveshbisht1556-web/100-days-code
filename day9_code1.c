//Q17: Write a program to find the roots of a quadratic equation and categorize them.



#include<stdio.h>

#include<math.h>       // To include advance calculation function like pow(),sqrt(),logrithmic, tirgnometric and more.
 
int main()
{

// Declaring input variable.

int a ,b ,c ;             
float alpha , beta , d ;

printf("Enter coefficient of the quadratic equation ((a)x^2 + (b)x + (c)) respectively to find it's roots :\n");

 scanf("%d %d %d", &a, &b, &c);  //Taking input form the user.

 d = (b)*(b) - 4*(a)*(c);      // Discriminant of the quadratic equation.

 alpha = (-(b) + sqrt(d))/(2*a);   //one of the root of the quadratic equation.

 beta = (-(b) - sqrt(d))/(2*a);    //another, one of root of the quadratic equation. 


// Conditions for the roots to be real , complex or same. 


if (d >= 0)               // If discriminant (d) is greater than equal to 0 , then the roots will be real and could be equal.              
{ 
 if (d == 0)             // If the discriminant is equal to then the roots will be same.
 { 
  printf("Roots are real and same: %.2f ", alpha);
 }
else
 { 
 printf("Roots are real and different: %.2f, %.2f ", alpha , beta);
 }
}
else                    // Else, roots will be complex no.
{
 printf("Roots are complex");
}
return 0;
}

 