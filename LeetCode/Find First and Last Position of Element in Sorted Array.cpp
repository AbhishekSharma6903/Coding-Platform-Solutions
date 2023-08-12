//METHOD 1:  LINEAR SEARCH 


//METHOD 2: BINARY SEARCH
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        int first = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
        int second = upper_bound(nums.begin(), nums.end(), target) - nums.begin();
        
        if (first == nums.size() || nums[first] != target)
            return {-1, -1};

        ans.emplace_back(first);
        ans.emplace_back(second - 1);

        return ans;
    }
};
