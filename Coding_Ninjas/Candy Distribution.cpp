#include <bits/stdc++.h> 
long long candyDistribution(int n, vector<int> &a) {
	long long sum =0 ;
	sort(a.begin(), a.end());
	long long ans =0, prev=0;
	for(int i=0; i<n; i++){
		if (a[i]>prev){
			prev = a[i];
		}
		else {
			prev++;
		}
		ans+=prev;
	}
	return ans;
}
