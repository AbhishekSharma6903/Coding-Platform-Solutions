#include<bits/stdc++.h>
class Solution {
public:


int checker(vector<int> arr, int thresh){
    int initi_painter =1;
    int sum_ele =0;
    for(int i=0;i<arr.size(); i++){
        if(sum_ele+arr[i] <=thresh){
            sum_ele+=arr[i];
        }
        else {
            initi_painter++;
            sum_ele = arr[i];
        }
    }
    return initi_painter;
}

    int splitArray(vector<int>& arr, int k) {
        int low = *max_element(arr.begin(),arr.end());
    int high = accumulate(arr.begin(), arr.end(), 0);
    while(low<=high){
        int mid= (low+high)/2;
        if(checker(arr, mid) > k){
            low = mid+1;
        }
        else {
            high = mid-1;
        }
    }
    return low;
    }
};
