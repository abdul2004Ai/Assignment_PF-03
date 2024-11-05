#include <stdio.h>

int main() {
    float purchaseAmount, finalAmount;
    char isMember;

    // Input purchase amount
    printf("Enter the purchase amount: ");
    scanf("%f", &purchaseAmount);

    // Input membership status
    printf("Are you a member? (y/n): ");
    scanf(" %c", &isMember);

    // Calculate final amount with discount based on conditions
    if (purchaseAmount > 2000) {
        if (isMember == 'y' || isMember == 'Y') {
            finalAmount = purchaseAmount * 0.8; // 20% discount
        } else {
            finalAmount = purchaseAmount * 0.9; // 10% discount
        }
    } else {
        finalAmount = purchaseAmount; // No discount
    }

    // Display final amount
    printf("The final amount after discount is: %.2f\n", finalAmount);

    return 0;
}