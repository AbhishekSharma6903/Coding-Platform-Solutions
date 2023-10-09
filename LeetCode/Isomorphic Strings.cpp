class Solution {
public:
    bool isIsomorphic(string s, string t) {
       if(s.size()!=t.size()){
           return false;
       } 
       unordered_map<char, char> mapping;
       unordered_map<char,char> mapping2;

       for(int i=0; i<s.size(); i++){
           if(mapping[s[i]]==0){
               mapping[s[i]]=t[i];
           }
           else if(mapping[s[i]]!=0 && mapping[s[i]]!=t[i]){
               return false;
           }

           if(mapping2[t[i]]==0){
               mapping2[t[i]]=s[i];
           }
           else if(mapping2[t[i]]!=0 && mapping2[t[i]]!=s[i]){
               return false;
           }
       }
       return true;
    }
};
