#include <stdio.h>

int main() {
    int n, sum = 0, diff = 0;

    // Input the value of n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculate the sum and difference
    for (int i = 1; i <= n; i++) {
        sum += i;   // Calculate the sum
        diff -= i;  // Calculate the difference
    }

    // Display the results
    printf("Sum of first %d natural numbers: %d\n", n, sum);
    printf("Difference of first %d natural numbers: %d\n", n, diff);

    return 0;
}
