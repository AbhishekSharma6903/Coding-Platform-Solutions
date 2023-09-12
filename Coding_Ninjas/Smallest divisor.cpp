#include<bits/stdc++.h>

bool checker(vector<int> arr, int div,  int limit){
	int sum=0;
	for(int i=0;i<arr.size(); i++){
		sum+=ceil((double)arr[i]/(double)div);
	}
	if(sum<=limit) return true;
	else return false;
}

int smallestDivisor(vector<int>& arr, int limit)
{
	int low = 1;
	int ans = -1;
	int high = *max_element(arr.begin(), arr.end());
	while(low<=high){
		int mid= (low+high)/2;
		if(checker(arr,mid, limit)){
			ans = mid;
			high= mid-1;
		}
		else low = mid+1;
	}
	return ans;
}
