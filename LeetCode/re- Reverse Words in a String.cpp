METHOD 1 :
  
class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        int i=0;
        int n= s.size();
        while(i<n){
            string temp ="";
            while(s[i]==' ' && i<n){
                i++;
            }
            while(s[i]!=' ' && i<n){
                temp+=s[i];
                i++;
            }
            if(temp.size()>0){
                if(ans.size()==0){
                    ans = temp;
                }
                else{
                    ans = temp + ' ' + ans;
                }
            }
        }
        return ans;
    }
};


------------------------------------------------------------------------------------------------------------------------------------------------
METHOD 2:

class Solution {
public:

    string removespaces(string s){
        int n= s.size();
        int i=0, j=0;
        while(j<n){
            if(s[j]!=' ' || (j!=0 && s[j-1]!=' ')){
                s[i] = s[j];
                i++;
            } 
            j++;
        }
        if(s[i-1]==' '){
            i--;}
        return s.substr(0,i);
        }
    

    string reverseWords(string s) {
        s = removespaces(s);
        int n= s.size();
        int end=0;
        while(end<n){
            int initial = end;
            while(end<n && s[end]!=' '){
                end++;
            }
            reverse(s.begin()+ initial, s.begin()+end);
            end++;
        }
        reverse(s.begin(), s.end());
        return s;
    }
};
