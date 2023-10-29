class Solution {
public:
    string longestPalindrome(string s) {
        int start = 0;
        int end = 0;
        int n = s.size();
        for(int i = 0; i < n; i++) {
            int odd = expandingFunction(s, i, i);
            int even = expandingFunction(s, i, i + 1);
            int len = max(odd, even);
            if(len > end - start) {
                start = i - (len - 1) / 2;
                end = i + len / 2;
            }
        }
        return s.substr(start, end - start + 1);
    }

    int expandingFunction(string s, int left, int right) {
        while(left >= 0 && right < s.length() && s[left] == s[right]) {
            left--;
            right++;
        }
        return (right - left) - 1;
    }
};
