class Solution {
public:
    int cnt=0;
    void merge(int l,int mid,int r,vector<int> &arr) {
        int j=mid+1;
        // Additional for loop to count number of reversePairs
        for(int i=l; i<=mid; i++){
            while(j<=r && arr[i] > 2*(long long)arr[j]){
                j++;
            }
            cnt+=j-(mid+1);
        }
        vector<int> tmp;
        int left=l,right=mid+1;
        while(left<=mid && right<=r) {
            if(arr[left]<=arr[right]) {
                tmp.push_back(arr[left++]);
            }
            else {
                tmp.push_back(arr[right++]);
            }
        }
        while(left<=mid) {
            tmp.push_back(arr[left++]);
        }
        while(right<=r) {
            tmp.push_back(arr[right++]);
        }
        for(int i=l;i<=r;i++) {
            arr[i]=tmp[i-l];
        }
    }

    void ms(int l,int r,vector<int> &arr) {
        if(l==r) return;
        int mid=(l+r)>>1;
        ms(l,mid,arr);
        ms(mid+1,r,arr);
        merge(l,mid,r,arr);
    }

    int reversePairs(vector<int>& nums) {
        ms(0,nums.size()-1,nums);
        return cnt;
    }
};
