int floorANS(int arr[], int n, int x){
int low=0;
int high=n-1;
int ans=-1;
while(low<=high){
	int mid = (low+high)/2;
	if(arr[mid]<=x){
		ans= arr[mid];
		low = mid+1;
	}
	else{
		high = mid-1;
	}
}
return ans;
}

int ceilANS(int arr[], int n, int x){
int low=0;
int high=n-1;
int ans = -1;
 while (low <= high) {
	 int mid= (low+high)/2;
	 if(arr[mid]>=x){
		 ans= arr[mid];
		 high = mid-1;
	 }
	 else{
		 low = mid+1;
	 }
	
}
 return ans;
}

pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
	sort(arr, arr+n);
	int FLOORAns = floorANS(arr,n,x);
	int CEILAns = ceilANS(arr,n,x);
        return {FLOORAns, CEILAns};
}
