#include <stdio.h>
#include <string.h>

// Function to check if a string is a palindrome
int is_palindrome(char str[]) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            return 0;  // Not a palindrome
        }
    }
    return 1;  // Palindrome
}

int main() {
    char input_str[100];

    printf("Enter a string: ");
    fgets(input_str, sizeof(input_str), stdin);

    // Remove newline character from the input
    input_str[strcspn(input_str, "\n")] = '\0';

    if (is_palindrome(input_str)) {
        printf("%s is a palindrome!\n", input_str);
    } else {
        printf("%s is not a palindrome.\n", input_str);
    }

    return 0;
}
