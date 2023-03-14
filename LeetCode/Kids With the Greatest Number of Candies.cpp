class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        
        
        int n = candies.size();
        vector <bool> ans(n);
        int largest = candies[0];
        for(int i=0; i<n; i++){
            if(candies[i]>largest){
                largest= candies[i];
            } 
        }
        for(int i=0; i<n; i++){
            if(candies[i] + extraCandies >= largest){
                ans[i]=true;
            }
            else{
                ans[i]=false;
            }
        }
        return ans;
    }
};
