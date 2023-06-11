class Solution {
    public:
     int majorityElement(vector <int> &arr) {
    int count=1;
    int ele=arr[0];
    for(int i=0;i<arr.size();i++){   
        if(arr[i]==ele){
            count++;
        }
        else{
            count--;
        }
        if(count==0){
            ele=arr[i];
            count=1;
        }
    }
    return ele;
    }

};
