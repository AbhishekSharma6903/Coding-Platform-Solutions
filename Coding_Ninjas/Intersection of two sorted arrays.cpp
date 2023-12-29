#include <vector>
#include <algorithm>

std::vector<int> findArrayIntersection(std::vector<int> &arr1, int n, std::vector<int> &arr2, int m) {
    std::vector<int> ans;
    int i = 0, j = 0;
    while (i < n && j < m) {
        if (arr1[i] < arr2[j]) {
            i++;
        } else if (arr1[i] > arr2[j]) {
            j++;
        } else {
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    return ans;
}
