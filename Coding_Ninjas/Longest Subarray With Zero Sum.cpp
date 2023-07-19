#include<bits/stdc++.h>
int getLongestZeroSumSubarrayLength(vector<int> &arr){
	unordered_map <int, int> mp;
	int sum=0;
	int maxi =0;
	for(int i=0; i<arr.size();i++){
		sum += arr[i];
			if(mp.find(sum) != mp.end()){
				maxi = max(maxi, i-mp[sum]);
			}
			else {
				mp[sum] = i;	
		}
	}
	return maxi;
}
