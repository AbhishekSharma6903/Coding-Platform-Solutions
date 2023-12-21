#include <bits/stdc++.h> 
int reverseInteger(int n){
    int rem=0;
    int ans = 0;

    while(n!=0){
        rem = n%10;
        n = n/10;
        if(ans<INT_MIN/10 || ans>INT_MAX/10) return -1;
        ans = ans*10+rem;
    }
    return ans;
}
