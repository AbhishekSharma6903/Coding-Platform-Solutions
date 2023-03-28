lass Solution {
  public:
    bool arraySortedOrNot(int arr[], int n) {
        int flag=1;
        for(int i=1; i<n; i++){
            if(arr[i]>=arr[i-1]){
            }
            else flag=0;
        }
        return flag;
    }
};
