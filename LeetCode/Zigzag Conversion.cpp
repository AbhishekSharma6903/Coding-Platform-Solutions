class Solution {
public:
    string convert(string s, int numRows) {
        vector<string> ans(numRows);
        if(numRows==1) return s;
        int i=0;
        bool flag = false;
        for(auto it: s){
            ans[i]+=it;
            if(i==0 || i==numRows-1){
                flag = !flag;
            }
            if(flag){
                i++;
            }
            else{
                i--;
            }
        }
        string result = "";
        for(auto it: ans){
            result+= it;
        }
        return result;
    }
};
