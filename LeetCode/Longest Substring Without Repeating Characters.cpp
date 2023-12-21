//Sliding window using set
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
