class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int n=s.size();
        vector <int> ans(n,n);
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(s[j]==c){
                    ans[i]=min(ans[i],abs(i-j));
                }
            }
        }
        
        return ans;
    }
};
