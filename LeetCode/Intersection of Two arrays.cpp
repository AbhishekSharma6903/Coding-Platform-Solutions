class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        unordered_set<int> s;
        unordered_set<int> s2;
        for(int i=0; i<nums1.size(); i++) s.insert(nums1[i]);
        for(int i=0;i<nums2.size(); i++){
            if(s.find(nums2[i])!=s.end()){
                s2.insert(nums2[i]);
            }
        }
        for(auto it: s2) ans.push_back(it);
        return ans;
    }
};
