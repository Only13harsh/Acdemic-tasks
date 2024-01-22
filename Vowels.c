#include <stdio.h>

int main() {
    char str[100];
    
    // Prompt the user to enter a string (assuming a single word for simplicity)
    printf("Enter a string: ");
    scanf("%s", str);

    printf("Vowels in the string: ");
    for (int i = 0; str[i] != '\0'; ++i) {
        char currentChar = str[i];
        if (currentChar == 'a' || currentChar == 'A' ||
            currentChar == 'e' || currentChar == 'E' ||
            currentChar == 'i' || currentChar == 'I' ||
            currentChar == 'o' || currentChar == 'O' ||
            currentChar == 'u' || currentChar == 'U') {
            printf("%c ", str[i]);
        }
    }

    return 0;
}
