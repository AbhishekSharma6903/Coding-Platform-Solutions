class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& can, int k) {
        int n = can.size();
        vector<bool> ans;
        int sum=0;
        int maxi = INT_MIN;
        for(int i=0; i<n;i++){
            maxi= max(can[i],maxi);
        }
        for(int i=0; i<n; i++){
            sum = can[i]+k;
            if(sum>=maxi) ans.push_back(true);
            else ans.push_back(false);
        }
        return ans;
    }
};
