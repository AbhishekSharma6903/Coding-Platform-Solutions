class Solution {
public:

void solver(string op, string ip , vector<string> &ans){
    if(ip.size()==0){
        ans.push_back(op);
        return;
    }
    if(isalpha(ip[0])){
        string op1 = op;
        string op2 = op;
        op1.push_back(tolower(ip[0]));
        op2.push_back(toupper(ip[0]));
        ip.erase(ip.begin()+0);
        solver(op1, ip, ans);
        solver(op2, ip, ans);
        return;
    }
    else{
        string op1 = op;
        op1.push_back(ip[0]);
        ip.erase(ip.begin()+0);
        solver(op1, ip, ans);
    }
}

    vector<string> letterCasePermutation(string s) {
        vector<string> ans;
        string op;
        solver(op, s, ans);
        return ans;
    }
};
