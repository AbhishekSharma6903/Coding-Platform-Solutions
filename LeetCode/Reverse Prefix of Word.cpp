class Solution {
public:
    string reversePrefix(string word, char ch) {
        int index=0;
        for(int i=0; i<word.size(); i++){
            if(word[i]==ch) {
             index=i;
            break;   
            }
        }
        reverse(word.begin(), word.begin()+index+1);
        return word;
    }
};
