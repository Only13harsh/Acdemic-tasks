#include <stdio.h>
#include <math.h>

// Function to calculate the number of digits in a given number
int countDigits(int num) {
    int count = 0;
    while (num != 0) {
        num /= 10;
        count++;
    }
    return count;
}

// Function to check if a number is an Armstrong number
int isArmstrong(int num) {
    int originalNum, remainder, n, result = 0;

    originalNum = num;
    n = countDigits(num);

    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    return (result == num);
}

int main() {
    int lower, upper;

    // Input the range
    printf("Enter the lower limit: ");
    scanf("%d", &lower);

    printf("Enter the upper limit: ");
    scanf("%d", &upper);

    printf("Armstrong numbers in the given range are: \n");

    // Check and print Armstrong numbers in the given range
    for (int i = lower; i <= upper; i++) {
        if (isArmstrong(i)) {
            printf("%d\n", i);
        }
    }

    return 0;
}
