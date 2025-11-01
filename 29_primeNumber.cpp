# include <iostream>
using namespace std;
bool isPrime(int n);
int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    if (isPrime(n)) cout << "prime";
    else cout << "not prime";
    return 0;
}
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= n / 2; i++) {
        if (!(n % i)) return false;
    }
    return true;
}