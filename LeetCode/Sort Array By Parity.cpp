class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n = nums.size();
        int me=n-1 , frnd=0;
        vector <int> res(n);
        
        for(int i=0; i<n; i++){
            if(nums[i]%2==0){
                res[frnd]=nums[i];
                frnd++;
            }
            else{
                res[me]= nums[i];
                me--;
            }
        }
    return res;

    }
};
