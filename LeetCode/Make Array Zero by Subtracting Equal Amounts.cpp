class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        vector <int> v(101);
        int ans=0;
        for(int i=0; i<nums.size(); i++){
            v[nums[i]]=1;
        }
        for(int i=1; i<=100; i++){
            ans=ans+v[i];
        }
        return ans;
    }
};
