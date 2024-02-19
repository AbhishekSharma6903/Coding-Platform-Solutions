//Method 1
class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;

        for(int i=0; i<=n; i++){
            int sum=0; 
            int num=i;
            while(num){
                sum+= num%2;
                num = num/2;
            }
            ans.push_back(sum);
        }
        return ans;
    }
};


//Metod 2 (optimal)
class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans(n+1);
        ans[0] = 0;
        for(int i=1; i<=n; i++){
            ans[i] = ans[i/2] + i%2; 
        }
        return ans;
    }
};
