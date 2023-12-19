#include <iostream>
#include <algorithm>

using namespace std;

string number_words[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

int main() {
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(n_temp);

    // Check the condition and print the result
    if (n >= 1 && n <= 9) {
        cout << number_words[n - 1] << endl;  // Adjust index to match the array
    } else {
        cout << "Greater than 9" << endl;
    }

    return 0;
}
