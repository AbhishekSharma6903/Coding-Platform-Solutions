class Solution { 
public:
    string addBinary(string a, string b) {
        string ans;
        int i = a.size()-1;
        int j = b.size()-1;
        int carry =0;
        
        while(i>=0 || j>=0){
            int sum = carry;
            if(i>=0){
                sum+=a[i]-'0';
                i--;
            }       
            if(j>=0){
                sum+=b[j]-'0';
                j--;
            }     
            if(sum>1) carry=1;
            else carry = 0;
            ans = to_string(sum%2) + ans; 
        }
        if(carry){
            ans = to_string(carry) + ans;
      }
     return ans;   
    }
};

