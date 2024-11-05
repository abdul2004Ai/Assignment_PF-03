#include <stdio.h>

int main() {
    int units;
    float bill = 0;

    // Input the units consumed
    printf("Enter the units consumed: ");
    scanf("%d", &units);

    // Calculate the bill based on units consumed
    if (units <= 100) {
        bill = 0;
    } else if (units <= 200) {
        bill = (units - 100) * 5;
    } else if (units <= 300) {
        bill = (100 * 5) + ((units - 200) * 8);
    } else {
        bill = (100 * 5) + (100 * 8) + ((units - 300) * 10);
    }

    // Output the bill amount
    printf("The electricity bill is: %.2f rupees\n", bill);

    return 0;
}