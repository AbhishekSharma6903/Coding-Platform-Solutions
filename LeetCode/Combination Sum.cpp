class Solution {
public:

    void solver(int i, vector<int>& op, vector<int>& arr, int target, vector<vector<int>>& ans) {
        if (i == arr.size()) {
            if (target == 0) {
                ans.push_back(op);
            }
            return;
        }
        if (arr[i] <= target) {  // Use <= to allow the possibility of including the number if it exactly matches the remaining target
            op.push_back(arr[i]);
            solver(i, op, arr, target - arr[i], ans);  // Include the same element again
            op.pop_back();
        }
        solver(i + 1, op, arr, target, ans);  // Move to the next element
    }

    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        vector<vector<int>> ans;
        vector<int> op;
        solver(0, op, arr, target, ans);
        return ans;
    }
};
