#include <stdio.h>

void insertionSort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && key < arr[j]) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int unsortedArray[] = {12, 11, 13, 5, 6};
    int n = sizeof(unsortedArray) / sizeof(unsortedArray[0]);

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", unsortedArray[i]);
    }

    insertionSort(unsortedArray, n);

    printf("\nSorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", unsortedArray[i]);
    }

    return 0;
}
