class Solution {
public:
    set<vector<int>> s;

    void solver(vector<int> ip,vector<int> op){
        if(ip.size()==0){
            s.insert(op);
            return;
        }
        vector<int> op1= op;
        vector<int> op2= op;
        op2.push_back(ip[0]);
        ip.erase(ip.begin() + 0);
        solver(ip,op1);
        solver(ip,op2);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& ip) {
        sort(ip.begin(), ip.end());
        vector<int>op;
        solver(ip, op);
        vector<vector<int>> ans;
        for(auto it: s){
            ans.push_back(it);
        }
        return ans;
    }
};
