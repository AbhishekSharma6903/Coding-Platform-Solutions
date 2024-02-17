class Solution {
public:
    int findDuplicate(vector<int>& arr) {
        int n = arr.size();
        unordered_map <int,int> mpp;
        for(int i=0; i<n; i++){
            mpp[arr[i]]++;
        }
        for(auto it: mpp){
            if(it.second>1){
                return it.first;
            }
        }
        return -1;
    }
};
