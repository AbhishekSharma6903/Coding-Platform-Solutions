int findAllSubarraysWithGivenSum(vector < int > & arr, int k) {
    map <int,int> mpp;
    mpp[0] =1;
    int prefixsum =0, count=0;
    for(int i=0; i<arr.size(); i++){
        prefixsum+= arr[i];
        int remaining = prefixsum - k;
        count += mpp[remaining];
        mpp[prefixsum]++;
    }
    return count;
}
