#include<bits/stdc++.h>
class Solution {
public:
    int maxiboi(vector<int> arr){
        int maxi = INT_MIN;
        int n= arr.size();
        for(int i=0; i<n; i++){
            maxi = max(arr[i], maxi);
        }
        return maxi;
    }

double  suitable_hrs(vector<int> arr, int hours){
    double total_hours = 0;
    int n = arr.size();
    for(int i=0; i<n; i++){
        total_hours += ceil((double)arr[i]/(double)hours);
    }
    return total_hours;
}

    int minEatingSpeed(vector<int>& v, int h) {
    int low= 1;
    int high = maxiboi(v); 
    int ans = INT_MAX;   
    while(low<=high){
        int mid =(low+high)/2;
        double totalHrs = suitable_hrs(v, mid);
        if(totalHrs<=h){
             ans = mid;
            high = mid-1;
        }
        else {
            low = mid+1;
        }
    } 
    return ans;
    }
};
