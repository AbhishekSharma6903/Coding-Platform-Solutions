class Solution {
public:
    vector<int> findDuplicates(vector<int>& arr) {
        vector<int> ans;
        for(int i =0; i<arr.size(); i++){
            if(arr[arr[i]-1]<0){
                ans.push_back(abs(arr[i]));
            }
            arr[abs(arr[i])-1]=-arr[abs(arr[i])-1];
        }
        return ans;
    }
};
