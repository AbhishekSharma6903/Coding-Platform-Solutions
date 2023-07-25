// B R U T E  FORCE CODE ---------------
vector<int> findMissingRepeatingNumbers(vector < int > a) {
    int n= a.size();
    int hash[n + 1] = {0};
    for(int i=0 ;i<n; i++){
        hash[a[i]]++;
    }
    int remaining =-1, missing= -1;
    for(int i=1; i<=n; i++){
        if(hash[i]==2) remaining = i;
        else if(hash[i]==0) missing= i;
        if(remaining!=-1 && missing!=-1){
            break;
        }
    }
    return {remaining, missing};
}

// O P T I M A L   SOLUION  :-------------------
vector<int> findMissingRepeatingNumbers(vector < int > a) {
    int n = a.size();
    long long sn = (n*(n+1))/2;
    long long s2n = (n*(n+1)*(2*n+1))/6;
    long long s =0, s2 =0;
    for(int i=0; i<n; i++){
        s += a[i];
        s2 += a[i]*a[i];
    }
    long long val1 = s- sn;
    long long val2 = s2- s2n;
    val2 = val2/val1;
    long long x= (val1 + val2)/2;
    long long y = x- val1 ;
    return {(int)x, (int)y};
}
