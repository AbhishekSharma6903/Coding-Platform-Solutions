class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        float mini = INT_MAX;
        sort(nums.begin(), nums.end());
        int i=0;
        int j= nums.size()-1;
        int avg = 0;
        while(i<j){
            mini = min(mini, float(nums[i]+nums[j])/2);
            i++;
            j--;
        }
        return mini;
    }
};
