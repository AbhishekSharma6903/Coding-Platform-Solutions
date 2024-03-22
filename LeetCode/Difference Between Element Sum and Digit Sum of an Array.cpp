class Solution {
public:

int  eachsum(vector<int> arr, int n){
    int add = 0;
    for(int i=0; i<n; i++){
        while(arr[i]>0){
            add += arr[i]%10;
            arr[i] = arr[i]/10;
        }
    }
    return add;
}
    int differenceOfSum(vector<int>& nums) {
        int sum = 0;
        int n = nums.size();
        for(int i=0; i<n; i++){
            sum+=nums[i];
        }
        int eachSUM = eachsum(nums,n);
        return abs(sum- eachSUM);
    }
};
