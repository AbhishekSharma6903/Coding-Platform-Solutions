#include<bits/stdc++.h>

bool canweplace(vector<int> arr, int difference, int cows){
    int cowcount = 1;
    int last = arr[0];
    for(int i =1; i<arr.size(); i++){
        if(arr[i]-last>=difference){
            cowcount++;
            last =arr[i];
        }
        if(cowcount>=cows) return true;
    }
    return false;
}

int aggressiveCows(vector<int> &arr, int k)
{
    int n = arr.size();
    sort(arr.begin(), arr.end());
    int low = 1;
    int ans =-1;
    int high = arr[n-1] - arr[0];
    while(low<=high){
        int mid = (low+high)/2;
        if(canweplace(arr, mid, k)){
            ans = mid;
            low = mid+1;
        }
        else high = mid-1;
    }
    return ans;

}
