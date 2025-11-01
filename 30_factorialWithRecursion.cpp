# include <iostream>
using namespace std;
void fact(int n, int &factorial);
int main() {
    int n, fcatorial = 1;
    cout << "Enter n: ";
    cin >> n;
    fact(n, fcatorial);
    cout << "Factorial is " << fcatorial << endl;
    return 0;
}
void fact(int n, int &factorial) {
    if (!n) return;
    factorial *= n;
    fact(n - 1, factorial);
}