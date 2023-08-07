#include <bits/stdc++.h> 
void quick_sort(vector<int> &arr, int low, int high){
    if(low>=high){
        return;
    }  
    int pivot = arr[low];
    int start = low;
    int mid = low;
    int end = high;
    while(mid<=end){
        if(arr[mid]==pivot){
            mid++;
        }
        else if(arr[mid]<pivot){
            swap(arr[mid],arr[start]);
            mid++;
            start++;
        } else {
            swap(arr[mid], arr[end]);
            end--;
        }
    }
    quick_sort(arr, low, start - 1);
    quick_sort(arr, end + 1, high); 
}

vector<int> quickSortUsingDutchNationalFlag(vector<int> &arr)
{
    int low =0;
    int high = arr.size()-1;
    quick_sort(arr,low,high);

    return arr;
}
