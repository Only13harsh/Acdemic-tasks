#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int choice;

    printf("Enter the first string: ");
    gets(str1);

    printf("Enter the second string: ");
    gets(str2);

    printf("\nString Functions Menu:\n");
    printf("1. Concatenate\n");
    printf("2. Compare\n");
    printf("3. Length\n");
    printf("4. Copy\n");
    printf("5. Exit\n");

    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            strcat(str1, str2);
            printf("Concatenated String: %s\n", str1);
            break;

        case 2:
            if (strcmp(str1, str2) == 0) {
                printf("Strings are equal.\n");
            } else {
                printf("Strings are not equal.\n");
            }
            break;

        case 3:
            printf("Length of first string: %zu\n", strlen(str1));
            printf("Length of second string: %zu\n", strlen(str2));
            break;

        case 4:
            strcpy(str1, str2);
            printf("Copied String: %s\n", str1);
            break;

        case 5:
            printf("Exiting the program.\n");
            break;

        default:
            printf("Invalid choice. Please enter a number between 1 and 5.\n");
            break;
    }

    return 0;
}
