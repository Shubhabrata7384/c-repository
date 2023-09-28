#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time, simple_interest, compound_interest;
    
    
    printf("Enter principal amount: ");
    scanf("%f", &principal);
    
    printf("Enter annual interest rate (in percentage): ");
    scanf("%f", &rate);
    
    printf("Enter time period (in years): ");
    scanf("%f", &time);
    
    
    simple_interest = (principal * rate * time) / 100;
    
    
    compound_interest = principal * (pow(1 + (rate / 100), time)) - principal;
    
    printf("\nSimple Interest: %.2f\n", simple_interest);
    printf("Compound Interest: %.2f\n", compound_interest);
    
    return 0;
}

