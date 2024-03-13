#include <iostream>

int main() {
    int n = 5;

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n - i; ++j)
            cout << " ";

        for (int k = 1; k <= i; ++k)
            cout << "Harsh"[k - 1];

        for (int l = i - 1; l >= 1; --l)
            cout << "Harsh"[l - 1];

        cout << endl;
    }

    return 0;
}
