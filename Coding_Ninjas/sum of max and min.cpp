#include <bits/stdc++.h> 
int sumOfMaxMin(int arr[], int n){
  int min_ele = INT_MAX;

  int max_ele = INT_MIN;

 

  for(int i = 0;i<n;i++){

  if(min_ele > arr[i]){

  min_ele = arr[i];

  }

  if (max_ele < arr[i]) {

  max_ele = arr[i];
  }
  }

  return min_ele + max_ele;
}
 
