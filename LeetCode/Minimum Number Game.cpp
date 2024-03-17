class Solution {
public:
int minifinder(vector<int> sample){
    int mini = INT_MAX;
    for(int i=0; i<sample.size(); i++){
        mini = min(mini, sample[i]);
    }
    return mini;

}
    vector<int> numberGame(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        int A;
        int B;
        while(n>0){
            A = minifinder(nums);
            auto itA = find(nums.begin(), nums.end(), A); // Find iterator pointing to element A
            if (itA != nums.end()) {
                nums.erase(itA); // Erase element A
            }
            B = minifinder(nums);
            auto itB = find(nums.begin(), nums.end(), B); // Find iterator pointing to element B
            if (itB != nums.end()) {
                nums.erase(itB); // Erase element B
            }
            ans.push_back(B);
            ans.push_back(A);
            n = n-2;
        }
        return ans;
    }
};
