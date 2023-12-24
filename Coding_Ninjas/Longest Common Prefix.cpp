#include<bits/stdc++.h>
string longestCommonPrefix(vector<string> &arr, int n)
{
    string ans = "";
    sort(arr.begin(), arr.end());
    string first = arr[0];
    string last = arr[n-1];
    int mini  = min(first.length(),last.length());
    for(int i=0; i<mini; i++){
        if(first[i] == last[i]){
            ans+=first[i];
        }
        else{
            break;
        }
    }
    return ans;
}



