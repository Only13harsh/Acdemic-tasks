#include <stdio.h>
#include <math.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0; // Not a prime number
    }
    
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return 0; // Not a prime number
        }
    }
    
    return 1; // Prime number
}

int main() {
    int n = 0;
    for (int i = 1; i <= 10; i++) {
        if (isPrime(n)) {
            printf("%d ", n);
        }
        n++;
    }
    
    printf("\nThese were all the prime numbers till 10\n");
    return 0;
}
