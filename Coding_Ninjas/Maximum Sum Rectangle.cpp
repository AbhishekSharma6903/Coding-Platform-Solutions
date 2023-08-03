#include <bits/stdc++.h> 
int kadane(int temp[], int n){
    int SUM = 0;
    int maxi = INT_MIN;
    for(int i=0; i<n; i++){
        SUM+=temp[i];
        maxi = max(SUM, maxi);
        if(SUM<0){
            SUM=0;
        }
    }
    return maxi;
}
int maxSumRectangle(vector<vector<int>>& arr, int n, int m)
{
    int super_max = INT_MIN;
    int  sum = 0;
    int col,row,temp_col;
    int temp[n];
    for(col =0; col<m; col++){
        for(row=0; row<n; row++){
            temp[row]=0;
        }
        for(temp_col=col; temp_col<m; temp_col++){
            for(row=0; row<n; row++){
                temp[row] += arr[row][temp_col];
            }
            sum = kadane(temp, n);
            super_max = max(super_max, sum);
        }
    }
    return super_max;
}
 
