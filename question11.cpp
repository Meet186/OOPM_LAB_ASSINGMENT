#include <iostream>
using namespace std;

int main() {
    int arr[5], choice;
    cout << "Enter 5 elements: ";
    for (int i = 0; i < 5; i++) cin >> arr[i];

    do {
        cout << "\n1.Traverse\n2.Find Min\n3.Find Max\n4.Sum\n5.Average\n6.Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        int sum = 0, min = arr[0], max = arr[0];

        switch (choice) {
            case 1:
                cout << "Array: ";
                for (int i = 0; i < 5; i++) cout << arr[i] << " ";
                break;

            case 2:
                for (int i = 1; i < 5; i++) if (arr[i] < min) min = arr[i];
                cout << "Min = " << min;
                break;

            case 3:
                for (int i = 1; i < 5; i++) if (arr[i] > max) max = arr[i];
                cout << "Max = " << max;
                break;

            case 4:
                for (int i = 0; i < 5; i++) sum += arr[i];
                cout << "Sum = " << sum;
                break;

            case 5:
                for (int i = 0; i < 5; i++) sum += arr[i];
                cout << "Average = " << (float)sum / 5;
                break;
        }
    } while (choice != 6);
    return 0;
}
