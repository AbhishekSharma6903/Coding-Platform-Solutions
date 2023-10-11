class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mpp;
        priority_queue<pair<int,char>> pq;
        string ans = "";
        for(auto it:s){
            mpp[it]++;
        }
        for(auto it: mpp){
            pq.push({it.second, it.first});
        }

        while(!pq.empty()){
            auto temp = pq.top();
            int num = temp.first;
            char character = temp.second;

            ans += string(num,character);
            pq.pop();
        }
        return ans;
    }
};
