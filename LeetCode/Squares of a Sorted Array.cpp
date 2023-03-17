class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n= nums.size();
        int me=n-1, frnd=0;
        vector <int> res(n);
        int i = n-1;
        while(me >= frnd){
            if(abs(nums[me]) >= abs(nums[frnd])){
                res[i]=abs(nums[me]);
                me--;
                i--;
            }else{
                res[i] = abs(nums[frnd]);
                frnd++;
                i--;
            }
            
            }
            for(int i=0; i<n; i++){
                res[i]=res[i]*res[i];
           
        }
         return res;
    }
};
