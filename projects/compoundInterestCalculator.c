#include <stdio.h>
#include <math.h>

int main(){

    // variables to store compound interest data
    double principal = 0.0;              // (P)
    double interestRate = 0.0;            // (R)
    double years = 0.0;                   // (T)
    double compoundedPerYear = 0.0;     // (N)

    double finalAmount = 0.0;

    printf("Compound Interest Calculator\n");
    // get principal amount from user
    printf("Enter the principal (P): ");
    scanf("%lf",&principal);

    // get interest rate from user
    printf("Enter the interest rate ％ (r): ");
    scanf("%lf",&interestRate);

    // get number of years from user
    printf("Enter the # of years (t): ");
    scanf("%lf",&years);

    // get compounding frequency from user
    printf("Enter # of times compounded per year (n): ");
    scanf("%lf",&compoundedPerYear);

    // calculate compound interest
    finalAmount = principal * pow(1.0 + (interestRate/100.0)/compoundedPerYear, compoundedPerYear * years);

    // display final amount
    printf("After %.0lf years, the total will be %.2lf\n", years, finalAmount);
    

    return 0;
}