class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int me=0;
        int  you=n-1;
        for(int i=0; i<n; i++){
            if(nums[i]==0){
                swap(nums[me],nums[i]);
                me++;
            }
        }
        for(int i=n-1; i>=0; i--){
            if(nums[i]==2){
                swap(nums[you],nums[i]);
                you--;
            }
        }
       
    }
};
