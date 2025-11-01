# include <iostream>
using namespace std;

int main() {
    int year;
    cout << "Enter year: ";
    cin >> year;
    if (year % 100) {
        if (year % 4) cout << "Not Leap";
        else cout << "Leap";
    } else {
        if (year % 400) cout << "Not Leap";
        else cout << "Leap";
    }
    return 0;
}