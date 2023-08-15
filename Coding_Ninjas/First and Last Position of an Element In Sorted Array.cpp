// BINARY SEARCH METHOD:
#include <bits/stdc++.h> 
int first_element(vector<int> arr, int n , int  k){
    int low=0;
    int high = n-1;
    int ans=-1;
    while(low<=high){
    int mid = (low+high)/2;
        if(arr[mid]==k){
            ans = mid;
            high = mid-1;
        }
        else if(k>arr[mid]){
            low= mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return ans;
}

int last_element(vector<int> arr, int n , int  k){
    int low=0;
    int high = n-1;
    int ans=-1;
    while(low<=high){
    int mid = (low+high)/2;
        if(arr[mid]==k){
            ans = mid;
            low = mid+1;
        }
        else if(k>arr[mid]){
            low= mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return ans;
}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    int First = first_element(arr, n,k);

    if(First == -1) {
        return {-1,-1};
    }
    int last = last_element(arr, n,k);
    return {First, last};
}
