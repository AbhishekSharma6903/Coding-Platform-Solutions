#include<bits/stdc++.h>
class Solution {
public:
int minimumBoi(vector<int> arr){
    int n = arr.size();
    int mini = INT_MAX;
    for(int i=0; i<n; i++){
        mini = min(arr[i], mini);
    }
    return mini;
}

int maximumboi(vector<int> arr){
    int n = arr.size();
    int maxi = INT_MIN;
    for(int i=0; i<n; i++){
        maxi = max(arr[i], maxi);
    }
    return maxi;
}

bool possible(vector<int> arr, int day, int m, int k){
    int n = arr.size();
    int count=0;
    int checker = 0; 
    for(int i=0;i<n ;i++){
        if(arr[i]<=day){
            count++;
        }
        else {
            checker+= count/k;
            count=0;
        }
     }
 checker += count/k;
 return checker>=m;       
}

    int minDays(vector<int>& arr, int m, int k) {
        int low = minimumBoi(arr);
        int high = maximumboi(arr);
        int ans =-1;
        while(low<=high){
            int mid = (low +high)/2;
            if(possible(arr, mid, m , k)){
                ans = mid;
                high = mid-1;
            }
            else low = mid +1;
        }
        return ans;
    }
};
