#include<stdio.h>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

void printFibonacci(int n) {
    printf("Fibonacci Series up to %d terms:\n", n);
    for (int i = 0; i < n; i++) {
        printf("%d, ", fibonacci(i));
    }
    printf("\n");
}

int main() {
    int terms;

    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &terms);

    if (terms <= 0) {
        printf("Number of terms should be greater than 0.\n");
    } else {
        printFibonacci(terms);
    }

    return 0;
}