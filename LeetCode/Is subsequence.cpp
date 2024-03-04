class Solution {
public:
    bool isSubsequence(string s, string t) {
        bool flag = false; // Initialize flag to false
        if (s.size()==0) return true;
        int n = t.size();
        int m = s.size();
        int i = 0;
        int j = 0; // Initialize j here
        while (i < m && j < n) { // Add condition for both strings
            if (s[i] == t[j]) {
                flag = true;
                i++; // Move to the next character in s
            }
            j++; // Always move to the next character in t
        }
        return i == m && flag; // Check if all characters of s are found in t
    }
};
