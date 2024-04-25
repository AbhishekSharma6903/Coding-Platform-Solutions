class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> a1;
        vector<int> a2;
        a1.push_back(nums[0]);
        a2.push_back(nums[1]);
        int i=2;
        while(i<n){
            int x = a1.size();
            int y = a2.size();
            if(a1[x-1] > a2[y-1]) a1.push_back(nums[i]);
            else a2.push_back(nums[i]);
            i++;
        }

        vector<int> result;
        for (int j = 0; j < a1.size(); ++j) {
            result.push_back(a1[j]);
        }
        for (int j = 0; j < a2.size(); ++j) {
            result.push_back(a2[j]);
        }
        return result;
    }
};
