#include <iostream>
using namespace std;

class Rectangle {
    int width, height;
public:
    void set_values(int w, int h) {
        width = w;
        height = h;
    }
    int area() {
        return width * height;
    }
};

int main() {
    Rectangle rect;
    rect.set_values(5, 3);
    cout << "Area: " << rect.area() << endl;
    return 0;
}
