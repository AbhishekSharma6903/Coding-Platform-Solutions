class Solution {
public:

    void solver(vector<int> nums,vector<int> op, vector<vector<int>> &ans ){
        if(nums.size()==0){
            ans.push_back(op);
            return;
        }
        vector<int> op1 = op;
        vector<int> op2 = op;
        op2.push_back(nums[0]);
        nums.erase(nums.begin()+0);
        solver(nums, op1, ans);
        solver(nums, op2, ans);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> op;
        solver(nums, op, ans);
        return ans;
    }
};
