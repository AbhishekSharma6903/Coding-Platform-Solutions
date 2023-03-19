class Solution {
public:
    bool isPalindrome(int x) {
        int p =x;
        int r;
        long long rev=0;
        if(x<0) return false;
        while(p!=0){
            r=p%10;
            rev=rev*10+r;
            p=p/10;
        }
        if(rev==x) return true;
        else return false;

    }
};
