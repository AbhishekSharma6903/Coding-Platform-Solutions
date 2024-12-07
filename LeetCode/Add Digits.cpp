class Solution {
public:
    int addDigits(int num) {
        int ans=num;
        while(num>9){
            int temp=num,sum=0;
            while(temp!=0){
                int r=temp%10;
                sum+=r;
                temp/=10;
            }
            num=sum;
            ans=sum;
        }
        return ans;
    }
};
