#include <iostream>
using namespace std;

int main() {
    int n;
    int count = 0;
    cin >> n;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            count++;
        }
    }
    if (count == 0) {
        cout << "it is a prime no" << endl;
    } else {
        cout << "it is not a prime no" << endl;
    }
    return 0;
}
