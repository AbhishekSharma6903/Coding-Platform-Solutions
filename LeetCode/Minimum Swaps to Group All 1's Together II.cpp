#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int cnt1 = count(nums.begin(), nums.end(), 1); // Count the number of 1's in the array
        int cnt0 = 0;
        int n = nums.size();
        
        int wsize = cnt1; // The size of the sliding window is the number of 1's

        // Count the number of 0's in the initial window of size `wsize`
        for (int i = 0; i < wsize; i++) {
            if (nums[i] == 0) cnt0++;
        }

        int mn = cnt0; // Minimum number of swaps is initialized to current count of 0's in the window

        // Sliding window through the array considering circular nature
        for (int i = wsize; i < wsize + n; i++) {
            // Add the new element in the window
            if (nums[i % n] == 0) cnt0++;
            // Remove the element that's sliding out of the window
            if (nums[(i - wsize) % n] == 0) cnt0--;

            // Update the minimum number of swaps
            mn = min(mn, cnt0);
        }

        return mn;
    }
};
