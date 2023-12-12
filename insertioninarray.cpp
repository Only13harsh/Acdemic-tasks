#include <iostream>

using namespace std;

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[100];
    cout << "Enter array elements:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "Original array elements: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int position, value;
    cout << "Enter the position to insert (1 to " << size + 1 << "): ";
    cin >> position;

    if (position < 1 || position > size + 1) {
        cout << "Invalid position for insertion." << endl;
        return 1;
    }

    cout << "Enter the value to insert: ";
    cin >> value;

    for (int i = size; i >= position; --i) {
        arr[i] = arr[i - 1];
    }

    arr[position - 1] = value;

    size++;

    cout << "Array after insertion: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
