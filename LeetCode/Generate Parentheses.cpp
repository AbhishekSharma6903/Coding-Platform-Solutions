class Solution {
public:

    void solver(int open, int close, string op, vector<string> &ans){
        if(open==0 && close==0){
            ans.push_back(op);
            return;
        }
        if(close>open){
            string op2 = op;
            op2.push_back(')');
            solver(open,close-1,op2,ans);
        }
        if(open!=0){
            string op1= op;
            op1.push_back('(');
            solver(open-1,close,op1,ans);
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        int close = n;
        int open = n;
        string op = "";
        solver(open, close,op, ans );
    return ans;
    }
};
