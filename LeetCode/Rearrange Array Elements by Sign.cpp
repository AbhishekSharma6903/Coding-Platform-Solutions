class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> answer (nums.size(),0);
        int posIndex=0 , negIndex=1;
        for(int i=0; i< nums.size(); i++){
            if(nums[i]>0){
                answer[posIndex] = nums[i];
                posIndex+=2;
            }
            else {
                answer[negIndex] = nums[i];
                negIndex+=2;
            }
        }
        return answer;
    }
    
};
