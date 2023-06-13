class Solution {
private:
void search(vector<int>& nums, int target ,int start,int end,int &ans){

if(start>end){
     ans = start;
    return;
}
int mid = (start+end)/2;
if(nums[mid]==target){
 
    ans = mid;
 return;
}
if(nums[mid]>target){
    
     search(nums,target,start,mid-1,ans);
}else{

     search(nums,target,mid+1,end,ans);
}


}
public:
    int searchInsert(vector<int>& nums, int target) {
        int ans =0;
        search(nums,target,0,nums.size()-1 ,ans);
        return ans;
  
    }
};
