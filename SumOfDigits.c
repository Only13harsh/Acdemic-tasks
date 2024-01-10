#include <stdio.h>

int main() {
    int number, sum = 0, digit;

    // Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Calculate the sum of digits
    while (number != 0) {
        digit = number % 10;  // Extract the last digit
        sum += digit;         // Add the digit to the sum
        number /= 10;         // Remove the last digit from the number
    }

    // Display the result
    printf("Sum of the digits: %d\n", sum);

    return 0;
}
