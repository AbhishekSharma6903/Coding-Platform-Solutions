class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxi = INT_MIN;
        int n = sentences.size();
        for(int i=0; i<n; i++){
            string sen = sentences[i];
            int cnt=1;
            int m= sen.size();
            for(int j=0; j<m; j++){
                if(sen[j]==' '){
                    cnt++;
                }
                maxi = max(maxi, cnt);
            }
        }
        return maxi;
    }
};
