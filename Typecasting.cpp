#include <iostream>

using namespace std;

int main() {
    double num1 = 10.5;
    int num2;

    num2 = num1;

    cout << "Implicit conversion: " << num2 << endl;

    num2 = static_cast<int>(num1);

    cout << "Explicit conversion using static_cast: " << num2 << endl;

    return 0;
}
