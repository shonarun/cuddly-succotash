# include <iostream>
using namespace std;
int fact(int n);
int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << fact(n) << endl;
    return 0;
}
int fact(int n) {
    int factorial = 1;
    while (n) {
        factorial *= n;
        n--;
    }
    return factorial;
}