void solver(vector<int> &arr, int sum, vector<int>&ans, int n, int index){
      if(index>=n){
          ans.push_back(sum);
            return;
      }
      solver(arr, sum+arr[index], ans, n, index+1);
      solver(arr, sum, ans, n, index+1);
  }
  
  //main
    vector<int> subsetSums(vector<int> arr, int n) {
        vector<int> ans;
        solver(arr,0,ans,n,0);
        return ans;
    }
