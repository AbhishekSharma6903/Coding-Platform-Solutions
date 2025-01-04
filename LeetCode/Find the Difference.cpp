class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int> map;
        for (char it: t){
            map[it]++;
        }
        for(char it: s){
            map[it]--;
        }
        for(auto& it: map){
            if(it.second == 1) return it.first;
        }
        return t[s.length()];
    }
};
