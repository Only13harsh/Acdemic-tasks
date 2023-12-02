#include <iostream>
using namespace std;

class Rectangle {
  int length, width;
public:
  Rectangle(int l, int w) {
    length = l;
    width = w;
  }
  int area() {
    return length * width;
  }
};

void printArea(Rectangle r) {
  cout << "Area of rectangle: " << r.area() << endl;
}

int main() {
  Rectangle r(5, 10);
  printArea(r);
  return 0;
}
