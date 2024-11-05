#include <stdio.h>

int main() {
    float income;
    char hasExistingLoan;
    char hasOverduePayments;

    printf("Enter your monthly income: ");
    scanf("%f", &income);

    if (income > 30000) {
        
        printf("Do you have an existing loan? (y/n): ");
        scanf(" %c", &hasExistingLoan);

        if (hasExistingLoan == 'y' || hasExistingLoan == 'Y') {
            
            printf("Do you have any overdue payments? (y/n): ");
            scanf(" %c", &hasOverduePayments);

            if (hasOverduePayments == 'n' || hasOverduePayments == 'N') {
                printf("You are eligible for a loan.\n");
            } else {
                printf("You are not eligible for a loan due to overdue payments.\n");
            }
        } else {
            printf("You are eligible for a loan.\n");
        }
    } else {
        printf("You are not eligible for a loan due to insufficient income.\n");
    }

    return 0;
}