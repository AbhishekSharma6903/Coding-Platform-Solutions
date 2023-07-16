vector <int> PerLevelNcR(int row){
    vector <int> temp;
    long long ans=1;
    temp.push_back(1);
    for(int col=1; col<row; col++){
        ans = ans * (row-col);
        ans = ans/col;
        temp.push_back(ans);
    }
    return temp;
}


vector<vector<int>> pascalTriangle(int N) {
    vector<vector<int>> Final_ans;
    for(int i=1; i<=N; i++){
        Final_ans.push_back(PerLevelNcR(i));
    }
    return Final_ans;
}
