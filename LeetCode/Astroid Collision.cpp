class Solution {
public:
    vector<int> asteroidCollision(vector<int>& ast) {
        stack<int> st;
        for(auto it: ast){
            bool alive = true;
            while(!st.empty() && it<0 && st.top()>0){
                if(st.top() < -it){
                    st.pop();
                    continue;
                }
                else if(st.top() == -it) {
                    st.pop();
                    }
                alive = false;
                break;
            }
            if(alive) st.push(it);
        }
    
    vector<int> ans(st.size());
    for(int i=st.size()-1; i>=0; i--){
        ans[i] = st.top();
        st.pop();
    }
    return ans;
}
};
