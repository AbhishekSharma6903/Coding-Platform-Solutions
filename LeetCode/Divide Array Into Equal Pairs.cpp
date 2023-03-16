class Solution {
public:
    bool divideArray(vector<int>& nums) {
        vector <int> occ(501);
        int n = nums.size();
        for(int i=0; i<n; i++){
            occ[nums[i]]++;
        }
        for(int i=1; i<=500; i++){
            if(occ[i]%2==1){
                return false;
            }
        }return true;

    }
};
