# include <iostream>
# include <vector>
using namespace std;
int main() {
    vector<int> v = {1, 5, 6};
    int le = v.back();
    cout << le << endl;
    v.pop_back();
    v.push_back(-le);
    cout << v.back() << endl;
    return 0;
}