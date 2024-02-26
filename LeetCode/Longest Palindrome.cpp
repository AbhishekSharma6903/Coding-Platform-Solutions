class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> mp;
        for(auto a:s) mp[a]++;

        int ans=0;
        bool isOdd = false;
        for(auto i : mp){
            if(i.second%2==0) ans+= i.second;
            else{
                ans+= i.second-1;
                isOdd = true;
            }
        }
        if(isOdd) ans+=1;
        return ans;
    }
};
