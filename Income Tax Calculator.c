#include <stdio.h>

int main() {
    float income, tax = 0.0;

    // Input income
    printf("Enter your income: ");
    scanf("%f", &income);

    // Calculate tax based on income range
    if (income <= 250000) {
        tax = 0.0;
    } 
    else if (income <= 500000) {
        tax = (income - 250000) * 0.05;
    } 
    else if (income <= 1000000) {
        tax = (250000 * 0.05) + (income - 500000) * 0.10;
    } 
    else {
        tax = (250000 * 0.05) + (500000 * 0.10) + (income - 1000000) * 0.15;
    }

    // Output the tax
    printf("Your income tax is: %.2f\n", tax);

    return 0;
}