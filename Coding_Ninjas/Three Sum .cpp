vector<vector<int>> triplet(int n, vector<int> &num){
    vector <vector<int>> ans;
    sort(num.begin(), num.end());
    for(int i=0; i< n; i++){
        if(i>0 && num[i]==num[i-1]) continue;
        int j = i+1;
        int k = n-1;
        while(j<k){
            int sum = num[i]+ num[j]+ num[k];
            if(sum<0) j++;
            else if (sum>0) k--;
            else {
              vector<int> temp = {num[i], num[j], num[k]};
              ans.push_back(temp);
              k--;
              j++;
              while(j<k && num[j]==num[j-1]){
                  j++;
              }
              while(j<k && num[k]==num[k+1]){
                  k--;
              }
            }
        }
    }
    return ans;
   
}
