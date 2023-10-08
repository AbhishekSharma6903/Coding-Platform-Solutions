class Solution {
public:
    string longestCommonPrefix(vector<string>& arr) {
        string ans="";
        sort(arr.begin(), arr.end());
        int n = arr.size();
        string first_element = arr[0];
        string last_element = arr[n-1];
        for(int i=0; i<min(first_element.size(), last_element.size()); i++){
            if(first_element[i] != last_element[i]){
                return ans;
            }
            else {
                ans+=first_element[i];
            }
        }
        return ans;
    }
};
