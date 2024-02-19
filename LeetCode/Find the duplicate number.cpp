//METHOD : 1
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

//METHOD 2
class Solution {
public:
    int findDuplicate(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int i=0;
        int n =arr.size();
        int j=1;
        while(j<n){
            if(arr[i]==arr[j]){
                return arr[i];
                
            }
            else {
                i++;
                j++;
            }
        }
        return -1;
    }
};
