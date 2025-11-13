#include <iostream>
using namespace std;

int main() {
    int sumOdd = 0, sumEven = 0;
    for (int i = 1; i <= 20; i++) {
        if (i % 2 == 0) sumEven += i;
        else sumOdd += i;
    }
    cout << "Sum of first 10 even numbers = " << sumEven << endl;
    cout << "Sum of first 10 odd numbers = " << sumOdd << endl;
    return 0;
}
