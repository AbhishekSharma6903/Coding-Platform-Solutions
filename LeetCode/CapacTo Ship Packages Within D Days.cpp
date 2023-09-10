class Solution {
public:
int findingdays(vector<int> arr, int capacity){
    int days=1;
    int load =0;
    for(int i=0; i<arr.size(); i++){
        if(load+arr[i] > capacity){
            days++;
            load = arr[i];
        }
        else{
            load += arr[i];
        }
    }
    return days;
}
    int shipWithinDays(vector<int>& arr, int days) {
        int low = *max_element(arr.begin(), arr.end());
        int high = accumulate(arr.begin(), arr.end(), 0);
        int ans=-1;
        while(low<=high){
            int mid = (low+high)/2;
            int numberOfDays = findingdays(arr,mid);
            if (numberOfDays <=days){
                ans= mid;
                high = mid-1;
            }
            else {
                low = mid+1;
            }
        }
        return ans;
    }
};
