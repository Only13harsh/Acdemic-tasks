#include <iostream>
#include <string>
using namespace std;
int main() {
    string a,b;
    cin >> a >> b ;
    int l_of_a = a.size();
    int l_of_b = b.size();
    cout << l_of_a <<" "<<l_of_b << endl;
    cout << a << b << endl;
    char c1 = a[0];
    char c2 = b[0];
    a[0] = c2;
    b[0] = c1;
    cout << a <<" "<<b;
    return 0;
}
