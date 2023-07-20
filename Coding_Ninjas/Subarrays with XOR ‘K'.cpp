#include<bits/stdc++.h>
int subarraysWithSumK(vector < int > a, int b) {
    unordered_map <int,int> mp;
    mp[0]=1;
    int count=0;
    int xr =  0;
    for(int i=0; i<a.size(); i++){
        xr= xr ^ a[i];
        int ans = xr ^ b;
        if(mp.find(ans)!= mp.end()){
            count+=mp[ans];
            mp[xr]++;
        }
        else {
            mp[xr]++;
        }
    }
    return count;
}
