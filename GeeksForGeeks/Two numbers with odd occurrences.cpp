vector<long long int> twoOddNum(long long int arr[], long long int n)  {
        long long xorr=0;
        for(int i=0; i<n; i++){
            xorr = xorr^arr[i];
        }
        int rtmost = (xorr & xorr-1)^xorr;
        int b1=0;
        int b2=0;
        for(int i=0; i<n; i++){
            if(arr[i] & rtmost) b1 = b1^arr[i];
            else b2 = b2^arr[i];
        }
        if(b1>b2) return {b1,b2};
        else return{b2,b1};
    }
