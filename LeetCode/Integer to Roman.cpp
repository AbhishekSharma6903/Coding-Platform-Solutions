class Solution {
private:
    vector<vector<string>> romans = {{"I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"}, //1-9
                                     {"X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"}, //10-90
                                     {"C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"}, //100-900
                                     {"M", "MM", "MMM"}};//1000-3000
    
public:
    string intToRoman(int num) {
        string res = "";
        int i = -1; 
        while(num){
            int cur = num % 10;
            i++;
            if(cur){
                res.insert(0, romans[i][cur-1]);
            } 
            num /= 10;
        }
        return res;
    }
};
