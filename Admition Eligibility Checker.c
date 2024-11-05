#include <stdio.h>

int main() {
    float math, science;

    // Input scores for Math and Science
    printf("Enter Math score (percentage): ");
    scanf("%f", &math);
    printf("Enter Science score (percentage): ");
    scanf("%f", &science);

    // Check eligibility for admission
    if (math >= 50 && science >= 50) {
        printf("The student is eligible for admission.\n");

        // Check if they qualify for a scholarship
        if (math > 80 && science > 80) {
            printf("The student also qualifies for a scholarship.\n");
        } else {
            printf("The student does not qualify for a scholarship.\n");
        }
    } else {
        printf("The student is not eligible for admission.\n");
    }

    return 0;
}