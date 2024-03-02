class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> ans(2);
        unordered_set<int> set1(nums1.begin(), nums1.end());
        unordered_set<int> set2(nums2.begin(), nums2.end());

        for(auto it: set1){
            if(set2.contains(it) == false ) ans[0].push_back(it);
        }
        for(auto it: set2){
            if(set1.contains(it) == false ) ans[1].push_back(it);
        }
        return ans;

    }
};
