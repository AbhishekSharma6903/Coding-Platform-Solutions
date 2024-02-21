class Solution {
public:
    string addStrings(string num1, string num2) {
        int n1 = num1.size()-1;
        int n2 = num2.size()-1;
        string ans;
        int carr =0;
        while(n1>=0 || n2>=0){
            if(n1<0){
                ans.push_back((((num2[n2]-48) + carr)%10)+48);
                carr = ((num2[n2]-48) + carr)/10;
                n2--;
            }
            else if(n2<0){
                ans.push_back((((num1[n1]-48) + carr)%10)+48);
                carr = ((num1[n1]-48) + carr)/10;
                n1--;
            }
            else{
                ans.push_back((((num1[n1]-48)+ (num2[n2]-48)+ carr)%10)+48);
                carr = ((num1[n1]-48)+ (num2[n2]-48)+ carr)/10;
                n1--;
                n2--;
            }
        }
        if(carr){
            ans.push_back(carr+48);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
