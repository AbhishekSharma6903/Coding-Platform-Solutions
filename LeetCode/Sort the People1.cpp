class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<int, string>> V;
        for(int i=0; i<names.size(); i++){
            V.push_back({heights[i],names[i]});
        }
        sort(V.begin(), V.end(),greater<>());
        for(int i=0; i<names.size(); i++){
            names[i] = V[i].second;
        }
        return names;
    }
};
