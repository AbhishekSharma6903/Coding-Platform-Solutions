class Solution {
public:

bool checker(string arr){
    int n = arr.size();
    int flag=0;
    for(int i=0; i<n/2; i++){
        if(arr[i] != arr[n-i-1]){
            return false;
        }
    }
    return true;
}

    string firstPalindrome(vector<string>& words) {
        int n = words.size();
        for(auto strr : words){
            if(checker(strr)){
                return strr;
            }
        }
        return "";
    }
};
