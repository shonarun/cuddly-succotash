# include <iostream>
# include <vector>
using namespace std;
int binarySearch(vector<int> &nums, int target);
int main() {
    vector<int> a = {1, 5, 6, 7};
    int target = 6;
    int index = binarySearch(a, target);
    if (index == -1) cout << "Not found" << endl;
    else cout << "At index " << index << endl;
    return 0;
}
int binarySearch(vector<int> &nums, int target) {
    int n = nums.size();
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) return mid;
        else if (target > nums[mid]) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}
