#include <vector>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high, int &count) {
    vector<int> temp;
    int i = low;
    int j = mid + 1;
    while (i <= mid && j <= high) {
        if (arr[i] <= arr[j]) {
            temp.push_back(arr[i++]);
        } else {
            temp.push_back(arr[j++]);
            count += (mid - i + 1);

        }
    }
    while (i <= mid) {
        temp.push_back(arr[i++]);
    }
    while (j <= high) {
        temp.push_back(arr[j++]);
    }
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}

void ms(vector<int> &arr, int low, int high, int &count) {
    if (low >= high) {
        return;
    }
    int mid = (low + high) / 2;
    ms(arr, low, mid, count);
    ms(arr, mid + 1, high, count);
    merge(arr, low, mid, high, count);
}

int numberOfInversions(vector<int> &a, int n) {
    int count = 0;
    ms(a, 0, n - 1, count);
    return count;
}
