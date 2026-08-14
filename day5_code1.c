//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.



#include <stdio.h>
#include <math.h>  // for pow() function

int main() {
    float principal, rate, time;
    float simpleInt, compoundInt;

    // Input values
    printf("Enter Principal amount: ");
    scanf("%f", &principal);

    printf("Enter Rate of Interest (in %%): ");
    scanf("%f", &rate);

    printf("Enter Time (in years): ");
    scanf("%f", &time);

   
    // To Calculate Simple Interest
    simpleInt = (principal * rate * time) / 100;

    // To Calculate Compound Interest
    compoundInt = principal * (pow((1 + rate / 100), time)) - principal;

    
    printf("\nSimple Interest = %.2f", simpleInt);           // Displaying result
    printf(" , Compound Interest = %.2f\n", compoundInt);     // Displaying result

    return 0;
}
