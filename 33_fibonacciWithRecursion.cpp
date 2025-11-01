# include <iostream>
using namespace std;
const int N = 25;
int arr[N] = {0 , 1};
void FibGen(int n);
int main() {
    FibGen(N);
    for (int i = 0; i < N; i++) cout << arr[i] << endl;
    return 0;
}
void FibGen(int n) {
    if (n > 1){
        FibGen(n - 1);
        arr[n] = arr[n - 1] + arr[n - 2];
    }
}