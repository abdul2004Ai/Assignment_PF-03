#include <stdio.h>

int main() {
    float balance, withdrawal;
    char permit;

    // Input current balance and withdrawal amount
    printf("Enter your account balance: ");
    scanf("%f", &balance);
    printf("Enter the amount to withdraw: ");
    scanf("%f", &withdrawal);

    // Check if balance is sufficient
    if (balance >= withdrawal) {
        // Check if withdrawal amount is over 10,000
        if (withdrawal > 10000) {
            // Ask if the customer has a special permit
            printf("Do you have a special withdrawal permit? (Y/N): ");
            scanf(" %c", &permit);  // Space before %c to consume any leftover newline character

            if (permit == 'Y' || permit == 'y') {
                balance -= withdrawal; // Deduct the amount from the balance
                printf("Withdrawal successful! Your new balance is: %.2f\n", balance);
            } else {
                printf("Withdrawal denied. Special permit is required for amounts over 10,000.\n");
            }
        } else {
            balance -= withdrawal; // Deduct the amount from the balance
            printf("Withdrawal successful! Your new balance is: %.2f\n", balance);
        }
    } else {
        printf("Insufficient balance. Withdrawal not possible.\n");
    }

    return 0;
}