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
