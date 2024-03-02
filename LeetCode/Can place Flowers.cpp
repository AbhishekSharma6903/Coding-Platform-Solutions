class Solution {
public:
    bool canPlaceFlowers(vector<int>& fb, int n) {
        int len = fb.size();
        int left, right;
        int count = 0;
        for(int i=0; i<len; i++){
            if(fb[i]==0){
            if(i==0 || fb[i-1]==0) left=0;
            else left = 1;

            if(i== len-1 || fb[i+1]==0) right=0;
            else right=1;

            if(left==0 && right==0){
                count++; 
                i++;
            }
            }
        }
        return count>=n;
        
    }
};
