#include <stdio.h>

// Function to count vowels in a string
int countVowels(char *str) {
    int count = 0;
    char ch;

    while ((ch = *str) != '\0') {
        // Check if the character is a vowel (uppercase or lowercase)
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            count++;
        }

        str++; // Move to the next character in the string
    }

    return count;
}

int main() {
    char inputString[100];

    // Input string from the user
    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    // Count vowels and display the result
    int vowelCount = countVowels(inputString);
    printf("Number of vowels: %d\n", vowelCount);

    return 0;
}
