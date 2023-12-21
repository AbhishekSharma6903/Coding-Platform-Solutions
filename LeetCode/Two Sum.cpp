//Method 1: brute force approach O(n^2)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int a=0,b=0;
        for(int i=0; i<nums.size()-1;i++){
            for(int j=i+1; j<nums.size(); j++){
                if(nums[i]+nums[j]==target){
                        a=i;
                        b=j;
                }
            }
        }
        return {a,b};
    }
};


//Method 2: optimal approach O(n logn) : hash table (target-b =a -> must be array , since a+b=target)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        map <int,int> mpp;
        for(int i=0; i<n; i++){
            int req = target - nums[i];
            if(mpp.find(req)!=mpp.end()){
                return {mpp[req], i};
            }
            mpp[nums[i]] = i;
        }
        return {-1,-1};
    }
};

//Method 1: Best approach O(n) : Two pointer appraoch
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> original(nums);
        sort(nums.begin(), nums.end());
        int first = 0;
        int last = n-1;
        while(first<last){
            int sum = nums[first]+nums[last];
            int index1=-1, index2=-1;
            if(sum == target){
                for(int i=0; i<n; i++){
                    if(original[i] == nums[first] && index1 == -1){ //index is -1 to get first occurence 
                        index1=i;
                    }
                    else if(original[i] == nums[last]){
                        index2 = i;
                    }
                }
                return {index1, index2};
            }
            else if(target>sum){
                first++;
                
            }
            else{
                last--;
            }
        }
        return {-1,-1};
    }
};


