class Solution {
public:
    int findIntegers(int n) {
        int fib[31];
        fib[0] = 1;
        fib[1] = 2;

        for(int i=2;i<30; i++){
            fib[i] = fib[i-1] + fib[i-2];
        } 
        int cnt =30,ans =0, prev=0;
        while(cnt>=0){
            if(n&(1<<cnt)){
                ans += fib[cnt];
                if(prev) return ans;
                prev =1;
            }
            else prev=0;
        cnt--;
        }
    return ans+1;
    }
};
