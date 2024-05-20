#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string inputString;

    cout << "Enter a string to reverse: ";
    getline(cin, inputString);

    reverse(inputString.begin(), inputString.end());

    cout << "Reversed string: " << inputString << endl;

    return 0;
}
