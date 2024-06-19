class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int cnt=0;
        int l=0;
        int r = nums.size()-1;
        while(l<r){
            if(nums[l]+nums[r] < target){
                cnt = cnt + (r-l);
                l++;
            }
            else r--;   
        }
        return cnt;
    }
};
