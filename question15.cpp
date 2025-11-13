#include <iostream>
using namespace std;

class Date {
    int day, month, year;

public:
    Date() {          // Default Constructor
        day = 1;
        month = 1;
        year = 2001;
    }

    void set_date(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }

    void display_date() {
        cout << "Date: " << day << "/" << month << "/" << year << endl;
    }
};

int main() {
    Date d1; // initialized with default values
    d1.display_date();

    d1.set_date(13, 11, 2025);
    cout << "Updated ";
    d1.display_date();
    return 0;
}
