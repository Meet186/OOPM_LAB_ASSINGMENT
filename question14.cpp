#include <iostream>
using namespace std;

// For square
float area(int side) {
    return side * side;
}

// For rectangle
float area(int length, int breadth) {
    return length * breadth;
}

// For circle
float area(float radius) {
    return 3.1416 * radius * radius;
}

int main() {
    cout << "Area of square (side=5): " << area(5) << endl;
    cout << "Area of rectangle (5x10): " << area(5, 10) << endl;
    cout << "Area of circle (r=3.5): " << area(3.5f) << endl;
    return 0;
}
