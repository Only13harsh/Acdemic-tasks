#include <stdio.h>

int main() {
  
    float marks;
    printf("Enter the marks: ");
    scanf("%f", &marks);

    if (marks >= 50.0) {
        printf("Congratulations! You passed.\n");
    } else {
        printf("Sorry, you failed. Try again.\n");
    }

    return 0;
}
