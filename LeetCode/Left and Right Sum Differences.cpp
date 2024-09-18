class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int> left(n);
        vector<int> right(n);
        vector<int> ans;
        int sum1 = 0;
        left[0] = sum1;
        int sum2 = 0;
        right[n-1] = sum2;
        for(int i = 1; i < n; i++) {
            sum1 += nums[i-1];
            left[i] = sum1;
        }
        for(int i = n-2; i >= 0; i--) {
            sum2 += nums[i+1];
            right[i] = sum2;
        }
        for(int i = 0; i < n; i++) {
            ans.push_back(abs(left[i] - right[i]));
        }
        return ans;
    }
};

