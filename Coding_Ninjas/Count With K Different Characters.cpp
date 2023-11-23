int countSubStrings(string str, int k) 
{
int ans = 0;
    int n = str.length();
    for(int i=0; i < n; i++)
    {        
        int distVal[26] = {0};
        int count = 0;
        for(int j=i; j < n; j++)
        {
            if(distVal[str[j] - 'a'] == 0)
            {
                count++;
                distVal[str[j] - 'a']++;
            }
            if(count == k)
           {
                ans++;
            }
            if(count > k)
            {
                break;
            }
        }
    }
 return ans;
}
