#include<bits/stdc++.h>
int findKRotation(vector<int> &arr){    
    int low =0;
    int n =arr.size();
    int high = n-1;
    int index = -1;
    int mini = INT_MAX;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[low]<=arr[mid]){
            if(arr[low]<mini){
                mini = arr[low];
                index = low;
            }
            low = mid+1;
        }
        else {
            if (arr[mid] < mini) {
                mini = arr[mid];
                index = mid;
            }
            high = mid - 1;
        }
    }
    return index;
}
