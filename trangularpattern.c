#include<stdio.h>

int main() {
    int a, i;

    for (i = 0; i <= 10; i++) {
        for (a = i; a <= 10; a++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
