class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        int ps[n+1];
        ps[0] = gain[0];
        for(int i=1; i<n; i++){
            ps[i] = ps[i-1] + gain[i];
        }
        sort(ps,ps+n);
        if(ps[n-1] < 0) return 0;
        else return ps[n-1];
    }
};
