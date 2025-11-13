#include <iostream>
using namespace std;

// Call by Value
void swapValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "Inside swapValue: a=" << a << ", b=" << b << endl;
}

// Call by Pointer
void swapPointer(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Call by Reference
void swapReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10, y = 20;
    cout << "Before swapping: x=" << x << ", y=" << y << endl;

    swapValue(x, y);
    cout << "After Call by Value: x=" << x << ", y=" << y << endl;

    swapPointer(&x, &y);
    cout << "After Call by Pointer: x=" << x << ", y=" << y << endl;

    swapReference(x, y);
    cout << "After Call by Reference: x=" << x << ", y=" << y << endl;
    return 0;
}
