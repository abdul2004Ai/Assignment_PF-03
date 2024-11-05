#include <stdio.h>

int main() {
    float mark1, mark2, mark3, average;

    // Input marks for the three subjects
    printf("Enter the marks for the three subjects: ");
    scanf("%f %f %f", &mark1, &mark2, &mark3);

    // Calculate the average
    average = (mark1 + mark2 + mark3) / 3;

    // Determine the result
    printf("Average: %.2f\n", average);
    
    if (average < 50) {
        printf("Result: Fail\n");
    } else if (average > 75) {
        printf("Result: Pass\nGrade: A\n");
    } else {
        printf("Result: Pass\nGrade: B\n");
    }

    return 0;
}