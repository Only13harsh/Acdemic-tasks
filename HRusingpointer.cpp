#include <stdio.h>
#include <cstdlib> // for abs function

void update(int *a, int *b) {
    // Store the original values in temporary variables
    int originalA = *a;
    int originalB = *b;

    // Update the values as required
    *a = originalA + originalB;
    *b = abs(originalA - originalB);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    // Input values
    scanf("%d %d", &a, &b);

    // Call the update function
    update(pa, pb);

    // Output the updated values
    printf("%d\n%d", a, b);

    return 0;
}
