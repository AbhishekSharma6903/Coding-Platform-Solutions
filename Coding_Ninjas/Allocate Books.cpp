#include <bits/stdc++.h>

int NoOfStudents(vector<int> arr, int current_page){
    int students = 1;
    long long PageCount = 0;
    for(int i=0; i<arr.size(); i++){
        if(PageCount + arr[i] <= current_page){
            PageCount+=arr[i];
        }
        else{
            students++;
            PageCount = arr[i];
        }
    }
    return students;
}

int findPages(vector<int>& arr, int n, int m) {
    int low = *max_element(arr.begin(), arr.end());
    int high = accumulate(arr.begin(), arr.end(),0);
    int ans=-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(NoOfStudents(arr,mid)>m){
              
              low = mid+1;
        }
        else high = mid-1;
    }
    return low;
}
