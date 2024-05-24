#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    long long cnt = 0;// avoid space at the starting of the string in "move disk....."
    long long toh(int N, int from, int to, int aux) {
        cnt ++;
        if(N==1){
            cout<<"move disk "<<N<<" from rod "<< from << " to rod "<<to<<endl;
            return cnt;
        }
        toh(N-1, from, aux,to);
        cout<<"move disk "<<N<<" from rod "<< from << " to rod "<<to<<endl;       
        toh(N-1,aux,to,from);        
    }
};

int main() {
    int T;
    cin >> T;//testcases
    while (T--) {
        int N;
        cin >> N;//taking input N
        Solution ob;       
        cout << ob.toh(N, 1, 3, 2) << endl;
    }
    return 0;
}
