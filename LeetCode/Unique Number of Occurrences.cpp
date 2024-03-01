//m1: map + set
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int,int> mpp;
        for(int i=0; i<n; i++){
            mpp[arr[i]]++;
        }
        unordered_set<int> s;
        for(auto it: mpp){
            s.insert(it.second);
        }
        return mpp.size() == s.size();
    }
};

//m2: map + periority queue
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int,int> mpp;
        for(int i=0; i<n; i++){
            mpp[arr[i]]++;
        }
        priority_queue<int> pq;
        for(auto it: mpp){
            pq.push(it.second);
        }

        while(pq.size()){
            int tp = pq.top();
            pq.pop();
            if(pq.size() && tp == pq.top()){
                return false;
            }
        }
        return true;
    }
        
};
