# include <iostream>
using namespace std;
void print(int n);
int main() {
    print(5);
    return 0;
}
void print(int n) {
    cout << n << endl;
    if (n > 1) print(n - 1);
}