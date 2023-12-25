// Method 1:
#include <bits/stdc++.h> 
string intToRoman(int num) {
    vector<vector<string>> romans={{"I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"}, //1-9
                                     {"X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"}, //10-90
                                     {"C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"}, //100-900
                                     {"M", "MM", "MMM"}};

    string ans="";
    int i=-1;
    while(num){
        int curr = num%10;
        i++;
        if(curr){
            ans.insert(0,romans[i][curr-1]);
        }
        num = num/10;
    }
    return ans;
}

//Method 2 : easy 
class Solution {
public:
    string intToRoman(int num) {
        vector<string> roman = {"M", "CM","D","CD","C","XC","L", "XL", "X", "IX", "V","IV", "I"};
        vector<int> digits = {1000,900,500,400,100,90,50,40,10,9,5,4,1};

        string ans = "";
        for(int i=0; i<13;i++){
            while(num>=digits[i]){
                    ans+=roman[i];
                    num-=digits[i];
                }
            }
        return ans;
        }
    
};
