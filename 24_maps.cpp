# include <iostream>
# include <map>
# include <vector>
using namespace std;
int main() {
    vector<int> v = {1, 2, 5};
    map<int, int> m;
    for (auto it : v) m[it]++;
    for (auto it : m) cout << it.first << " -> " << it.second << endl;
    return 0;
}