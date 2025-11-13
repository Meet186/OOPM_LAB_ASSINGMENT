#include <iostream>
using namespace std;

class Distance {
    int feet;
    float inches;

public:
    void setdist(int f, float i) {
        feet = f;
        inches = i;
    }

    void getdist() {
        cout << "Enter feet: ";
        cin >> feet;
        cout << "Enter inches: ";
        cin >> inches;
    }

    void showdist() {
        cout << "Distance = " << feet << " feet " << inches << " inches" << endl;
    }
};

int main() {
    Distance d1, d2;
    d1.setdist(5, 7.5);
    d2.getdist();

    cout << "First ";
    d1.showdist();

    cout << "Second ";
    d2.showdist();

    return 0;
}
