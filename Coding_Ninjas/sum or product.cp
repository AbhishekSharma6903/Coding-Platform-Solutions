#include <bits/stdc++.h> 
long long int product(long long int n) {
    int mod = 1e9 + 7;
    if( n == 1)
        return 1;
    else
        return (n*(product(n-1)))%mod;
}

long long int sumOrProduct(long long int n, long long int q)
{
    // Write your code here.
    long long int result;
    if(q == 1) {
        result = (n*(n+1))/2;
    } else if ( q ==2) {
        result = product(n);
    }
    return result;
}
