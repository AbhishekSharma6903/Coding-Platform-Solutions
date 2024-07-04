
int bit(int n) {
    int prev = 1;
    if (n == 0) return 1;
    if (n == 1) return prev+1;
    int curr;
    for (int i = 1; i < n; i++) {
        curr = (1 << i) + 2*prev; 
        prev = curr;
    }
    return prev+1;
}

int countSetBits(int n) {
    int ans = 0;
    int cnt=0;
    for (int i = 31; i >=0; i--) {
        if (n & (1 << i)) {
            ans += bit(i);
            ans+=(1<<i)*cnt;
            cnt++;
        }
    }
    return ans;
}
