#define mod 1000000007
class Solution {
public:
    long long power(long long x, long long y){
        if(y==0) return 1;
        long long ans = power(x,y/2) % mod; // Take modulus here to prevent overflow
        ans = (ans * ans) % mod; // Update ans using modular multiplication
        if(y%2) ans = (ans * x) % mod; // Update ans if y is odd using modular multiplication
        return ans;
    }

    int countGoodNumbers(long long n) {
        long long odd = n/2;
        long long even = n/2 + n%2;
        long long ans = (power(5, even) * power(4, odd)) % mod; // Take modulus of the final answer
        return ans;
    }
};
