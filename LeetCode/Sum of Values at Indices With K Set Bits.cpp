class Solution {
public:

bool checker(int w, int key){
    int cnt=0;
    while(w>0){
        int r = w%2;
        if(r==1) cnt++;
        w = w/2;
    }
    if(cnt==key) return true;
    else return false;
}
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int sum = 0;
        for(int i=0; i<nums.size();i++){
            if(checker(i,k)){
                sum+=nums[i];
            }
        }
        return sum;
    }
};
