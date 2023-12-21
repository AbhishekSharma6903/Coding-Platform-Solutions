//Sliding window using set

//best approach using vector/map:
#include<bits/stdc++.h>
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector< int> mpp(256,-1);
        int right=0, left=0;
        int len=0;
        int n= s.size();
            while(right<n){
                if(mpp[s[right]]!=-1){
                    left = max(left, mpp[s[right]]+1);
                }
                mpp[s[right]]=right;
                len = max(len, right-left+1);
                right++;
            }
        return len;
        }
    
};

//method 2 using sets
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int maxi = 0;
        unordered_set<char> charset;
        int left=0;

        for(int right=0; right<n; right++){
            if(charset.count(s[right])==0){
                charset.insert(s[right]);
                maxi = max(maxi, right-left+1);
            }
            else{
                while(charset.count(s[right])){
                    charset.erase(s[left]);
                    left++;
                }
                charset.insert(s[right]);
            }
        }
        return maxi;
    }
};
