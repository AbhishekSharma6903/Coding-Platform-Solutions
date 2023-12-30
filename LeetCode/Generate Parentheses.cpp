#include <vector>
#include <string>

class Solution {
public:
    void helper(int n, std::vector<std::string>& ans, std::string output, int open, int close) {
        if (output.size() == n * 2) {
            ans.push_back(output);
            return;
        }
        if (open < n) {
            helper(n, ans, output + "(", open + 1, close);
        }
        if (close < open) {
            helper(n, ans, output + ")", open, close + 1);
        }
    }

    std::vector<std::string> generateParenthesis(int n) {
        std::vector<std::string> ans;
        helper(n, ans, "", 0, 0);
        return ans;
    }

};
