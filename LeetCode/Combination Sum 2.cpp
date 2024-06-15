class Solution {
public:
    void solver(vector<int>& input, vector<int> op, int target, vector<vector<int>>& ans, int index) {
        if (target == 0) {
            ans.push_back(op);
            return;
        }
        if (index == input.size() || target < 0) {
            return;
        }

        // Skip duplicates
        for (int i = index; i < input.size(); i++) {
            if (i > index && input[i] == input[i - 1]) {
                continue;
            }
            // Include the current element
            op.push_back(input[i]);
            solver(input, op, target - input[i], ans, i + 1);
            op.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& input, int target) {
        vector<vector<int>> ans;
        vector<int> op;
        sort(input.begin(), input.end());
        solver(input, op, target, ans, 0);
        return ans;
    }
};
