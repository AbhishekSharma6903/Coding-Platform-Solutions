int findmaxi(vector<vector<int>> &arr, int rowFinder){
    int column = arr[0].size();
    int ans = 0;
    for(int i=0; i<column; i++){
        if(arr[rowFinder][i]> arr[rowFinder][ans]){
            ans=i;
        }
    }
    return ans;
}

vector<int> findPeakGrid(vector<vector<int>> &g){
    int row = g.size();
    int col = g[0].size();
    
    int low =0;
    int high = row-1;

    while(low<high){
        int mid = (low+high)/2;
        int c = findmaxi(g,mid);
        if(mid==row-1 || g[mid][c] > g[mid+1][c]){
            high = mid;
        }
        else {
            low = mid+1;
        }
    }
    return {low, findmaxi(g, low)};
}
