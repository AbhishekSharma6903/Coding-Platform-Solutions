class Solution {
  public:
    vector<int> topK(vector<int>& nums, int k) {
        // Code here
        vector<pair<int, int>>v;
        unordered_map<int, int>mp;
        vector<int>ans;
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
        }
        for(auto x: mp){
            v.push_back({x.second, x.first});
        }
        sort(v.rbegin(), v.rend());
        for(int i=0; i<k; i++){
            ans.push_back(v[i].second);
        }
        return ans;
        }

};
