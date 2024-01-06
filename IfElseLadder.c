#include <stdio.h>

int main() {
    // Declare variables
    int score;

    // Input the score
    printf("Enter the score: ");
    scanf("%d", &score);

    // Check the grade using an if-else ladder
    if (score >= 90) {
        printf("Grade A\n");
    } else if (score >= 80) {
        printf("Grade B\n");
    } else if (score >= 70) {
        printf("Grade C\n");
    } else if (score >= 60) {
        printf("Grade D\n");
    } else {
        printf("Grade F\n");
    }

    return 0;
}
