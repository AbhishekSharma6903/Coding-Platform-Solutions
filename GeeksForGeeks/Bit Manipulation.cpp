class Solution{
public:
    void bitManipulation(int num, int i) {
        cout<<((num & (1<<i-1))>>i-1)<<" ";
        cout<<(num | (1<<i-1))<<" ";
        cout<<(num&~(1<<i-1))<<" ";
    }
};
