# include <iostream>
# include <vector>
using namespace std;
void plusOne(vector<int> &a);
int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    plusOne(v);
    for (int i = 0; i < n; i++) cout << v [i] << endl;
    return 0;
}
void plusOne(vector<int> &a) {
    int n = a.size();
    for (int i = 0; i < n; i++) a[i]++;
}