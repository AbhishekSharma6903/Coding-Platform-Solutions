#include <vector>
#include <algorithm>

class Solution {
public:
    int optimizer(int number){
        int dupli = number;
        int maxi = INT_MIN;
        
        while(dupli > 0){
            int r = dupli % 10;
            maxi = std::max(maxi, r);
            dupli = dupli / 10;
        }
        
        int result = 0;
        int multiplier = 1;
        
        while (number > 0) {
            int digit = number % 10;
            result += maxi * multiplier;
            multiplier *= 10;
            number /= 10;
        }
        
        return result;
    }

    int sumOfEncryptedInt(std::vector<int>& nums) {
        int sum = 0;
        for(int i = 0; i < nums.size(); i++){
            int ele = optimizer(nums[i]);
            sum += ele;
        }
        return sum;
    }
};
