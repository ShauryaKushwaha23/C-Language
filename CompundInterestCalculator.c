#include <stdio.h>
#include <math.h>

int main() {

    // Compound Interest Calculator
    // Formula: A = P(1 + r/n)^(nt)
    
    double principal = 0.0;
    double rate = 0.0;
    int years = 0; 
    int timesCompounded = 0.0;
    double total = 0.0;

    printf("Compound Interest Calculator\n");
    
    printf("Enter the principal (P): ");
    scanf("%lf", &principal);

    printf("Enter the annual interest rate (r) in percentage: ");
    scanf("%lf", &rate);
    rate = rate / 100; // Convert percentage to decimal

    printf("Enter the number of years (t): ");
    scanf("%d", &years);

    printf("Enter the number of times interest is compounded per year (n): ");
    scanf("%d", &timesCompounded);

    total = principal * pow((1 + rate / timesCompounded), (timesCompounded * years));

    printf("Total amount after %d years: $%.2lf\n", years, total);

    
    return 0;
}