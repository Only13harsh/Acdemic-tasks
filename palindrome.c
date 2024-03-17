#include <stdio.h>

// Function to check if a number is a palindrome
int is_palindrome(int n) {
    int num = n;
    int reversed = 0;

    while (num > 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    return (reversed == n);
}

// Function to print palindrome numbers up to a specified limit
void print_palindromes(int limit) {
    printf("Palindrome numbers up to %d:\n", limit);
    for (int i = 0; i < limit; ++i) {
        if (is_palindrome(i)) {
            printf("%d\n", i);
        }
    }
}

int main() {
    int limit = 1000;
    print_palindromes(limit);
    return 0;
}
