#include <stdio.h>

int main() {
    int age;
    float weight;

    // Input age and weight
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your weight (in kg): ");
    scanf("%f", &weight);

    // Check eligibility
    if (age >= 18 && age <= 65) {
        if (weight >= 50) {
            printf("You are eligible to donate blood.\n");
        } else {
            printf("You are not eligible to donate blood because your weight is less than 50 kg.\n");
        }
    } else {
        printf("You are not eligible to donate blood because your age is not within the range of 18 to 65.\n");
    }

    return 0;
}
