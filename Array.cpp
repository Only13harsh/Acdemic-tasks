#include <iostream>

using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int sum = 0;
    int max = arr[0];
    int min = arr[0];

    for (int i = 0; i < 5; i++) {
        sum += arr[i];
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    cout << "Sum: " << sum << endl;
    cout << "Max: " << max << endl;
    cout << "Min: " << min << endl;

    return 0;
}
