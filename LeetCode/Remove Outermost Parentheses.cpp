class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans="";
        int c=0;
        for(char ch:s){
            if(ch=='(' && c==0){
                c++;
            }
            else if(ch=='(' && c>=1){
                ans+=ch;
                c++;
            }
            else if(ch==')' && c>1){
                ans+=ch;
                c--;
            }
            else if(ch==')' && c==1){
                c--;
            }
        }
        return ans;
    }
};
