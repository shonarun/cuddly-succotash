# include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    int val, index = -1;
    cout << "Enter val to search: ";
    cin >> val;
    for (int i = 0; i < n; i++) if (arr[i] == val) index = i;
    if (index == -1) cout << "Not found" << endl;
    else cout << "At index " << index << endl;
}