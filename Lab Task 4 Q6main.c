#include <stdio.h>

int main() {
    float marks;

    /* Ask the user to input the student's marks */
    printf("Enter the student's marks: ");
    scanf("%f", &marks);

    /* Assign a grade based on the marks */
    if (marks >= 90) {
        printf("Grade: A\n");
    } else if (marks >= 80 && marks < 90) {
        printf("Grade: B\n");
    } else if (marks >= 70 && marks < 80) {
        printf("Grade: C\n");
    } else if (marks >= 60 && marks < 70) {
        printf("Grade: D\n");
    } else {
        printf("Grade: F\n");
    }

    return 0;
}