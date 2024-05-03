#include <iostream>
using namespace std;

int findMin(int arr[], int size) {
    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int main() {
    int arr[] = {5, 3, 9, 1, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int minValue = findMin(arr, size);
    
    cout << "Minimum value in the array: " << minValue << endl;
    
    return 0;
}
