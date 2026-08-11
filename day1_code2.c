// Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.


#include<stdio.h>
int main ()

{
  float a, b, sum, diff, product , quotient;  // Declaring variable 

   printf(" Enter two number \n");  //Taking input form the user
   printf(" Enter 1st number : ");

   scanf("%f",&a);
   printf(" Enter 2nd number : ");
   scanf("%f",&b);
   sum = a+b;      // sum of the numbers
   diff = a-b;     // differnece of the numbers
   product = a*b;  // product of the number
   quotient = a/b; // quotient of 'a' divided by 'b'
 
   printf("SUM = %.2f\n",sum);            // Displaying output : sum
   printf("DIFFRENCE = %.2f\n",diff);     //     ,,       ,,   : difference
   printf("PRODUCT = %.2f\n",product);    //     ,,       ,,   : product
   printf("QUOTIENT = %.2f\n",quotient);  //     ,,       ,,   : quotient
   return 0;       
}
    