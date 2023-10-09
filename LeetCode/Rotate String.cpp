class Solution {
public:

bool tester(string s, string d, int i){
    for(int j=0; j< s.length(); j++){
        if(s[j] != d[(i+j)%d.size()]){
            return false;
        }
    }
    return true;
}

    bool rotateString(string s, string d) {
        if(s.size()!= d.size()) return false;
        if(s.size()==0) return true;

        for(int i=0; i<s.size(); i++){
            if(tester(s,d,i)){
                return true;
            }
        }
        return false;
    }
};
