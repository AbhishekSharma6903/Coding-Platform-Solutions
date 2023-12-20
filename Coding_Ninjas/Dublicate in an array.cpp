//Method 1 : sets 
#include <set>
int findDuplicate(vector<int> &arr) 
{
    set<int>nums;
    for(int i=0; i<arr.size(); i++){
        if(nums.find(arr[i]) != nums.end()){
            return arr[i];
        }
        else 
            nums.insert(arr[i]);
    }
}
//Method 2 : map  (hashing)
//Method 3 : Xor 
//Method 4 : using sort + loop
//Method 5 : Double loop 

 
