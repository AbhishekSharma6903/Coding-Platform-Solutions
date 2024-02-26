class Solution {
public:
    string decodeString(string s) {
        stack<string> strStack;
        stack<int> numStack;
        int cn = 0;
        string cs = "";

        for(auto c: s){
            if(c=='['){
                strStack.push(cs);
                numStack.push(cn);
                cn=0;
                cs="";
            }
            else if(c==']'){
                int num = numStack.top();
                numStack.pop();
                string prevStr = strStack.top();
                strStack.pop();
                for(int i=0; i<num; i++){
                    prevStr +=cs;
                }
                cs = prevStr;
            }
            else if(isdigit(c)){
                cn = cn*10 + (c - '0');
            }
            else{
                cs+=c;
            }
        }
        return cs;
    }
};
