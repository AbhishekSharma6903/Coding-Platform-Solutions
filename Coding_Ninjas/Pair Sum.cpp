#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> pairSum(vector<int> &arr, int s) {
    sort(arr.begin(), arr.end());
    vector<vector<int>> ans;
    int left = 0;
    int right = arr.size() - 1;

    while (left < right) {
        int sum = arr[left] + arr[right];
        if (sum == s) {
            ans.push_back({arr[left], arr[right]});
            left++;
            right--;
        } else if (sum < s) {
            left++;
        } else {
            right--;
        }
    }
    return ans;
}
