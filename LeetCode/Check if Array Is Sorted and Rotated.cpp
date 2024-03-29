class Solution {
 public:
  bool check(vector<int>& nums) {
    const int n = nums.size();
    int rotates = 0;

    for (int i = 0; i < n; ++i)
      if (nums[i] > nums[(i + 1) % n] && ++rotates > 1)
        return false;

    return true;
  }
};

----------------------------------------------------- METHOD 2 --------------------------------------------------------------------------------
 
//  class Solution {
//  public:
//   bool check(vector<int>& nums) {
//     int n = nums.size();
//     int count=0;
//     for(int i=1; i<n; i++){
//       if(nums[i-1]>nums[i]) count++;
//     }
//     if(nums[n-1]>nums[0]) count++;
//     return count<=1;
//   }
// };
