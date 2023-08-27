long long calcTotalHours(vector<int> v, int mid)
{
    int n = v.size();
    long long totalHours = 0;    
    for( int i=0 ; i<n ; i++ )
    {
        totalHours += (long long) ceil((double)v[i]/(double)mid);
    }
    return totalHours;   
}
int minimumRateToEatBananas(vector<int> v, int h) {  
    auto maxElement = max_element(v.begin(), v.end()); 
    int low = 1 ;
    int high = *maxElement;
    int mid;
    while( low <= high )
    {
        mid =(low+high)/2;
        long long totalHours = calcTotalHours(v, mid);
        if( totalHours <= h )
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return low; 
}
