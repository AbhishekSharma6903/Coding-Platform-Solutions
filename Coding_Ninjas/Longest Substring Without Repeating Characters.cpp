#include <bits/stdc++.h> 
int lengthOfLongestSubstring(string &s) {
    int n = s.size();
    int right=0, left=0;
    int len=0;
    vector<int>mpp(256,-1);
        while(right<n){
            if(mpp[s[right]]!=-1){
                left = max(left, mpp[s[right]]+1);
            }
            mpp[s[right]] = right;
            len = max(len, right-left+1);
            right++;
        }

    
    return len;
}
