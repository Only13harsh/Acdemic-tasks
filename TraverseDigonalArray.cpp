#include <iostream>
using namespace std;

const int ROWS = 3;
const int COLS = 3;

void traverseDiagonalArray(int arr[ROWS][COLS]) {
    cout << "Diagonal elements: ";
    for (int i = 0; i < ROWS; i++) {
        cout << arr[i][i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[ROWS][COLS] = {{1, 2, 3},
                            {4, 5, 6},
                            {7, 8, 9}};
    
    traverseDiagonalArray(arr);

    return 0;
}
