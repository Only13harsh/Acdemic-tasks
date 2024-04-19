#include <iostream>

using namespace std;

class MyClass {
public:
    // Constructor
    MyClass() {
        cout << "Constructor called!" << endl;
    }

    // Destructor
    ~MyClass() {
        cout << "Destructor called!" << endl;
    }
};

int main() {
    // Creating an object of MyClass
    MyClass obj;

    // Object goes out of scope, destructor is called automatically
    return 0;
}
