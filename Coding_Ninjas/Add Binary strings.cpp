string addBinaryString(string &a, string &b, int n, int m){
    int carry =0;

    int i = n-1;
    int j = m-1;
    string ans;
    while(i>=0 || j>=0){
        int sum=carry;
        if(i>=0){
            sum+=a[i]-'0';
            i--;
        }
        if(j>=0){
            sum+=b[j]-'0';
            j--;
        }

        carry = sum/2;
        ans = to_string(sum%2) + ans;
    }
    if(carry){
        ans = to_string(carry) + ans;
    }
    return ans;
}
