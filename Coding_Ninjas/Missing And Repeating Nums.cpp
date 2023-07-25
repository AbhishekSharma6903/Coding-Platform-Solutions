//Brute Force Solution : -----------------------------
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
