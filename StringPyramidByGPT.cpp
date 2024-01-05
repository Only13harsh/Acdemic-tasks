#include <iostream>
#include <string>

using namespace std;

int main() {
    int height;

    // Get the height of the pyramid from the user
    cout << "Enter the height of the pyramid: ";
    cin >> height;

    // Display the string pyramid
    for (int i = 1; i <= height; ++i) {
        // Print spaces to center the pyramid
        for (int j = 0; j < height - i; ++j) {
            cout << " ";
        }

        // Print the string in ascending order
        for (int k = 1; k <= i; ++k) {
            cout << "*";
        }

        // Print the string in descending order
        for (int l = i - 1; l >= 1; --l) {
            cout << "*";
        }

        // Move to the next line for the next row
        cout << endl;
    }

    return 0;
}
