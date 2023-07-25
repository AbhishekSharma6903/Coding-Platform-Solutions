//BRUTE FORCE SOLUTION --------------
#include<vector>
void mergeTwoSortedArraysWithoutExtraSpace(vector<long long> &a, vector<long long> &b){
	int n = a.size();
	int m= b.size();
	long long c[n+m];
	int left =0; 
	int right = 0 ;
	int index =0;
	while(left<n && right<m){
		if(a[left]< b[right]){
			c[index] = a[left];
			index ++;
			left++;
		}
		else {
			c[index] = b[right];
			index ++;
			right++;
		}
	}
	while(left<n){
		c[index] = a[left];
		index++, left++;
	}
	while(right<m){
		c[index] = b[right];
		index++, right++;
	}
        for (int i = 0; i < n + m; i++) {
          if (i < n)
            a[i] = c[i];
          else
            b[i - n] = c[i];
        }
}

-----------------------------------------------------------------------
//OPTIMAL SOLUTION ------------------
#include<vector>
void mergeTwoSortedArraysWithoutExtraSpace(vector<long long> &a, vector<long long> &b){
	int n = a.size();
	int m = b.size();
	int left = n-1;
	int right = 0;
	while(left>=0 && right<m){
		if(a[left]>b[right]){
			swap(a[left], b[right]);
			left--;
			right++;
		}
		else {
			break;
		}
	}
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	
}
