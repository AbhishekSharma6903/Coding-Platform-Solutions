class Solution {
public:

    vector<int> v;

    int MAH(vector<int> &v){
        vector<int> right;
        vector<int> left;
        stack<pair<int,int>>s;

        for(int j = v.size()-1 ;j>=0; j--){
            while(!s.empty() && s.top().first>v[j]){
                s.pop();
            }
            if(s.empty()){
              right.push_back(v.size());  
            } 
            else {
                right.push_back(s.top().second);
            }
            s.push({v[j],j});
        }
        reverse(right.begin(), right.end());
        while(!s.empty()){
            s.pop();
        }
        //left
  for(int j = 0; j <v.size(); j++) {
            while (!s.empty() && s.top().first >=v[j]) {
                s.pop();
            }
            if (s.empty()) {
                left.push_back(-1);
            } else {
                left.push_back(s.top().second);
            }
            s.push({v[j], j});
        }

        vector<int> w(v.size());
        vector<int> area(v.size());
        for(int i=0; i<v.size(); i++){
            w[i] = right[i]-left[i]-1;
            area[i] = v[i]*w[i];
        }

        int maxArea = INT_MIN;
        for(int i=0; i<v.size(); i++){
            if(area[i]>maxArea){
                maxArea = area[i];
            }
        }
return maxArea;
    }

    int maximalRectangle(vector<vector<char>>& matrix) {
        int rows = matrix.size();
        int col = matrix[0].size();
        vector<int> v;
        for(int j=0; j<col; j++){
            v.push_back(matrix[0][j] - '0');
        }
        int mx = MAH(v);

        for(int i=1; i<rows;i++){
            for(int j=0; j<col; j++){
                if(matrix[i][j]=='0') v[j]=0;
                else v[j]+=(matrix[i][j]-'0');
            }
            mx = max(mx,MAH(v));
        }
        return mx;
    }
};
