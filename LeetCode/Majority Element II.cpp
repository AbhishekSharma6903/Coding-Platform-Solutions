// Better Method :
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int countMajority = nums.size()/3;
        unordered_map<int,int> map;
        vector<int> ans;
        for(auto it: nums){
            map[it]++;
        }
        for(auto it: map){
            if(it.second > countMajority){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};

// OPTIMAL SOLUTION : 
//  #include<bits/stdc++.h>
// vector<int> majorityElement(vector<int> v) {
// 	int count1=0;
// 	int count2=0;
// 	int ele1 = INT_MIN;
// 	int ele2 = INT_MIN;
// 	int criteria = v.size()/3;
// 	for(int i=0; i<v.size();i++){
// 		if(count1==0 && v[i]!=ele2){
// 			count1++;
// 			ele1=v[i];
// 		}
// 		else if(count2==0 && v[i]!=ele1){
// 			count2++;
// 			ele2=v[i];
// 		}
// 		else if(v[i]==ele1) count1++;
// 		else if(v[i]==ele2) count2++;
// 		else{
// 			count1--;
// 			count2--;
// 		}
// 	}
// 	int c1=0, c2=0;
// 	vector<int> list;
// 	for(int i=0; i<v.size();i++){
// 		if(v[i]==ele1) c1++;
// 		if(v[i]==ele2) c2++;
// 	}
// 	if(c1>criteria) list.push_back(ele1);
// 	if(c2>criteria)list.push_back(ele2);
// 	sort(list.begin(),list.end());
// 	return list;
// }
