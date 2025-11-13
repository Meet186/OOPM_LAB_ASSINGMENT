#include <iostream>
using namespace std;

int main() {
    int arr[10];
    cout << "Enter 10 elements: ";
    for (int i = 0; i < 10; i++) cin >> arr[i];

    int min = arr[0], max = arr[0];
    for (int i = 1; i < 10; i++) {
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
    }
    cout << "Minimum = " << min << "\nMaximum = " << max;
    return 0;
}
