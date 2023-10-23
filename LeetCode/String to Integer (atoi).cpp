class Solution {
public:
    int myAtoi(string s) {
        int n = s.size();
        if(n==0) return 0; 
        int i=0;
        while(i<n && s[i]==' '){
            i++;
        }
        s= s.substr(i);

        int str=1;
        long ans=0;
        
        if(s[0]=='-'){
            str=-1;
        }
        i = (s[0]=='+' || s[0]=='-')? 1:0;
        
        int maxi = INT_MAX, mini = INT_MIN;
        while(i<n){
            if(s[i]==' ' || !isdigit(s[i])) break;
            ans = ans*10 + s[i]-'0';
            if(str==1 && ans>maxi) return maxi;
            if(str==-1 && -1*ans<mini) return mini;
            i++;
        }
return (int)(str*ans);

    }
};
