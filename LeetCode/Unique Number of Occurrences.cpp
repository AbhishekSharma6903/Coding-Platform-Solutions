class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int,int> mpp;
        for(int i=0; i<n; i++){
            mpp[arr[i]]++;
        }
        unordered_set<int> s;
        for(auto it: mpp){
            s.insert(it.second);
        }
        return mpp.size() == s.size();
    }
};
