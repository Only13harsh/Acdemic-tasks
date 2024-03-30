#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator
    srand(time(NULL));
    
    // Generate a random number between 1 and 100
    int randomNumber = rand() % 100 + 1;
    
    // Print the random number
    printf("Random number: %d\n", randomNumber);
    
    return 0;
}
