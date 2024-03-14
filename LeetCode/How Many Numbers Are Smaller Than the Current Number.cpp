class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int last = nums.size()-1;
       
   vector<int>  p;
      for(int i = 0 ; i<last+1 ; i++){
        int count = last ;
          for(int j=0;j<last+1;j++){
           if(i==j){
               continue;
           }
           if(nums[j]>=nums[i]){
                   count--;
            }

            }
           p.push_back(count);
           }
        return p ; 
    }
};
