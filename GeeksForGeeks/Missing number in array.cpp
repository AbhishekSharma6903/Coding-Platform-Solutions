class Solution{
  public:
    int missingNumber(vector<int>& array, int n) {
        int sum=0;
        for(int i=0; i<array.size(); i++){
            sum=sum+array[i];
        }
        int total = n*(n+1)/2;
        return (total-sum);
    }
};
