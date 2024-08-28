class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<string,int>> V;
        for(int i=0; i<names.size(); i++){
            V.push_back({names[i],heights[i]});
        }
        sort(V.begin(), V.end(),greater<>());
        for(int i=0; i<names.size(); i++){
            names[i] = V[i].second;
        }
        return names;
    }
};
