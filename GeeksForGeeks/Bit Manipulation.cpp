class Solution{
public:
    void bitManipulation(int num, int i) {
        cout<<((num & (1<<i-1))>>i-1)<<" "; // ((num >>i-1)&1)  -> Right shift
        cout<<(num | (1<<i-1))<<" ";
        cout<<(num&~(1<<i-1))<<" ";
    }
};
