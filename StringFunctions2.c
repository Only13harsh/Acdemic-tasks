#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to calculate the length of a string
int stringLength(const char* str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

// Function to copy one string to another
void stringCopy(char* destination, const char* source) {
    int i = 0;
    while (source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0';
}

// Function to concatenate two strings
void stringConcatenate(char* destination, const char* source) {
    int destLength = stringLength(destination);
    int i = 0;
    while (source[i] != '\0') {
        destination[destLength + i] = source[i];
        i++;
    }
    destination[destLength + i] = '\0';
}

// Function to compare two strings
int stringCompare(const char* str1, const char* str2) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return (str1[i] - str2[i]);
        }
        i++;
    }
    return (str1[i] - str2[i]);
}

int main() {
    char str1[50] = "Hello";
    char str2[50] = "World";

    // String Length
    printf("Length of str1: %d\n", stringLength(str1));

    // String Copy
    char copyStr[50];
    stringCopy(copyStr, str1);
    printf("Copied String: %s\n", copyStr);

    // String Concatenate
    stringConcatenate(str1, " ");
    stringConcatenate(str1, str2);
    printf("Concatenated String: %s\n", str1);

    // String Compare
    int result = stringCompare("abc", "abc");
    if (result == 0) {
        printf("Strings are equal.\n");
    } else {
        printf("Strings are not equal. (Difference: %d)\n", result);
    }

    return 0;
}
