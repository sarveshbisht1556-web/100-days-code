/*Q18: Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
90-100: Grade A 
80-89: Grade B 
70-79: Grade C 
60-69: Grade D 
below 60: Grade F.*/




#include<stdio.h>

int main()
{

float grade;

printf("Enter your percentage between 0-100 to know your grade : ");

scanf("%f", &grade);    //Taking input  form the user.

if( grade >= 90 && grade <= 100 )     // Garde A's condition.
{
 printf("Grade A");
}
else if ( grade >= 80 && grade < 90 )  // Grade B's condition.
{
 printf("Grade B");
}
else if ( grade >=70 && grade < 80 )  //  Grade C's condition.
{
 printf("Grade C");
}
else if ( grade >= 60 && grade < 70 ) // Grade D's condition.
{
 printf("Grade D");
}
else if ( grade < 60 && grade >= 0 )  // Grade F's condition.
{
 printf("Grade F");
}
else                                  // Else for : Wrong input.
{
printf("Wrong input");
}

return 0;

}