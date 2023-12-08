int createAtoi(string s) {
    // Write your code here.
    long long unsigned res = 0;
    int sign = 1; // sign 1 for positive, sign -1 for negative
    for(int i=0;i<s.length();i++)
    {
        if(i==0 && s[0]=='-'){//if first char in s is '-'
            sign = -1;
        }

        else if(i==0 && s[0]=='+'){//if first char in s is '+'
            continue;       //sign is already 1 ,so no need to do anything
        } 

        else if (s[i]>='0' && s[i]<='9'){
            res=10*res+(s[i]-'0'); // ascii of '0' is 48
        }

        else{
            break;
        }
    }
    if(sign==1 && res>INT_MAX)
    {
        return INT_MAX;
    }
    else if (sign == -1 && res > INT_MAX) {
        return INT_MIN;
    } 
    return sign*res;
}

