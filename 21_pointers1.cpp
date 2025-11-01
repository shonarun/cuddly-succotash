# include <iostream>
using namespace std;
int main() {
    int a = 10, b = 15;
    int *ptr1 = &a, *ptr2 = &b;

    cout << a << " " << b << endl;
    swap(*ptr1, *ptr2);
    cout << a << " " << b << endl;
    return 0;
}