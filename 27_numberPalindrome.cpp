# include <iostream>
using namespace std;
bool palind(int n);
int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    if (palind(n)) cout << "palindrome" << endl;
    else cout << "not a palindrome" << endl;
    return 0;
}
bool palind(int n) {
    int rev = 0;
    int temp = n;
    while (n) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    if (temp == rev) return true;
    return false;
}