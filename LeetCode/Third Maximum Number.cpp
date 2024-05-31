#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

class Solution {
public:

    int thirdMax(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int n = arr.size();
        int cnt = 0;
        int ans = arr[n - 1]; 
        
        for (int i = n - 1; i >= 0; --i) {
            if (i == n - 1 || arr[i] != arr[i + 1]) {
                cnt++;
            }
            if (cnt == 3) {
                ans = arr[i];
                break;
            }
        }

        if (cnt < 3) {
            return arr[n - 1];
        }

        return ans;
    }
};
