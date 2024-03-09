class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        vector <int> freq(101,0);
        int ans=0;
        int n = nums.size();
        for(int i=0; i<n; i++){
            freq[nums[i]]++;
        }
        for(int i=1; i<=100; i++){
            ans= ans + ((freq[i]*(freq[i]-1))/2);
        }
        return ans;
    }
};
