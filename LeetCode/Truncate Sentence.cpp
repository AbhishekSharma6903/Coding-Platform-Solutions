class Solution {
public:
    string truncateSentence(string s, int k) {
        int count=1;
        
        for( int i=0;i<s.size();i++){
          if(s[i]==' '){
              count++;
          }
      }
      if(count==k){
          return s;
      }
        int i;
      for( i=0;i<s.size(),k>=1;i++){
          if(s[i]==' '){
              k--;
          }
      }
      s.erase(s.begin()+i-1,s.end());
      return s;
    }
};
