#include <iostream>
using namespace std;
class Reverseofnum {
public:
int num, rev;
void get() {
cout << "Enter a number: ";
cin >> num;
}
void calculate() {
rev = 0;
int temp = num;
while (temp > 0) {
rev = rev * 10 + temp % 10;
temp = temp / 10;
}
}
void display() {
cout << "The reverse of the number is: " << rev << endl;
}
};

int main() {
    Reverseofnum r1;
    r1.get();
    r1.calculate();
    r1.display();
return 0;
}
