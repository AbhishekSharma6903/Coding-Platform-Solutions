class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size();
        int last = n-1;
        for(int i=0; i<n/2; i++){
            char t = s[i];
            s[i] = s[last];
            s[last] = t;
            last--;
        }
    }
};
