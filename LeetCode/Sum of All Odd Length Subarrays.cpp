class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n = arr.size() , ans =0;
        for(int l=0;l<n;l++){
            for(int r=l;r<n;r++){
                if( ( r-l+1 ) % 2 ==1 ){
                    int sum =0;
                    for(int i = l;i<=r;i++){
                        sum += arr[i];
                    }
                    ans += sum;
                }
            }
        }
        return ans;
    }
};
