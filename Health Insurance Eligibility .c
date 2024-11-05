#include <stdio.h>

int main() {
    int age;
    char seriousIllness;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age > 18) {
        if (age > 45) {
            
            printf("Have you had any serious illness? (y/n): ");
            scanf(" %c", &seriousIllness);

            if (seriousIllness == 'y' || seriousIllness == 'Y') {
                printf("You are not eligible for health insurance.\n");
            } else {
                printf("You are eligible for health insurance.\n");
            }
        } else {
            printf("You are eligible for health insurance.\n");
        }
    } else {
        printf("You are not eligible for health insurance.\n");
    }

    return 0;
}