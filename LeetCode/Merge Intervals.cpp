//METHOD 1 : (Brute Force)
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& arr) {
        vector <vector<int>> ans;
        sort(arr.begin(), arr.end());
        int n = arr.size();

        for(int i=0; i<n;i++){
            int begin = arr[i][0];
            int end = arr[i][1];
            if(!ans.empty() && end<=ans.back()[1]){
                continue ;
            }
            for(int j=i+1 ; j<n ; j++){
                if(arr[j][0] <= end){
                    end = max(end , arr[j][1]);
                }
                else {
                    break;
                }
            }
            ans.push_back({begin , end});
        } 
    return ans;
    }
};


//Method 2 : (Optimal Code)
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& arr) {
        vector <vector<int>> ans;
        sort(arr.begin(), arr.end());
        int n = arr.size();

        for(int i=0 ; i<n; i++){
            if(ans.empty() || arr[i][0]> ans.back()[1]){
                ans.push_back(arr[i]);
            }
            else{
                ans.back()[1] = max(ans.back()[1], arr[i][1]);
            }
        }

    return ans;
    }
};
