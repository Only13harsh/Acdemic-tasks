#include <iostream>
using namespace std;

class Example {
public:
    int x;
    static int count;

    Example(int n) {
        x = n;
        count++;
    }

    static void displayCount() {
        cout << "Total objects created: " << count << endl;
    }
};

// Initialize the static member variable
int Example::count = 0;

int main() {
    Example e1(5);
    Example e2(10);
    Example e3(15);

    Example::displayCount();

    return 0;
}
