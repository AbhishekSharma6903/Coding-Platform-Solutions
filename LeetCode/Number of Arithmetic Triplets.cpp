class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        map<int,int>mp;
        int count = 0 ;
        for( int i = 0 ; i < nums.size() ; i++ )
            mp[ nums[i] ]++;
        for( int i = 0 ; i < nums.size() ; i++ )
        {
            if ( mp[nums[i]+diff] && mp[nums[i]+diff+diff] )
                count++;
        }
        return count ;
    }
};

//checks if the element with say a have the other two pairs a+diff and a+diff+diff , then can increment the count
