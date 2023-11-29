#include <iostream>
using namespace std;

class Rectangle {
    int *width, *height;
public:
    Rectangle() {
        width = new int;
        height = new int;
        *width = 0;
        *height = 0;
    }
    Rectangle(int w, int h) {
        width = new int;
        height = new int;
        *width = w;
        *height = h;
    }
    Rectangle(const Rectangle &r) {
        width = new int;
        height = new int;
        *width = *(r.width);
        *height = *(r.height);
    }
    ~Rectangle() {
        delete width;
        delete height;
    }
    void setWidth(int w) {
        *width = w;
    }
    void setHeight(int h) {
        *height = h;
    }
    int getWidth() {
        return *width;
    }
    int getHeight() {
        return *height;
    }
    int getArea() {
        return (*width) * (*height);
    }
};

int main() {
    Rectangle r1;
    cout << "Width: " << r1.getWidth() << endl;
    cout << "Height: " << r1.getHeight() << endl;
    cout << "Area: " << r1.getArea() << endl;

    Rectangle r2(5, 10);
    cout << "Width: " << r2.getWidth() << endl;
    cout << "Height: " << r2.getHeight() << endl;
    cout << "Area: " << r2.getArea() << endl;

    Rectangle r3 = r2;
    r3.setWidth(7);
    cout << "Width: " << r3.getWidth() << endl;
    cout << "Height: " << r3.getHeight() << endl;
    cout << "Area: " << r3.getArea() << endl;

    return 0;
}
