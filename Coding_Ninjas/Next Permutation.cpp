#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &A, int n)
{
    int index=-1;
    for(int i=n-2;i>=0; i--){
        if(A[i]<A[i+1]){
            index=i;
            break;
        }
    }

    if(index==-1){
        reverse(A.begin(), A.end());
        return A;
    }

    for(int i=n-1; i>index; i--){
        if(A[i]>A[index]){
            swap(A[i],A[index]);
            break;
        }
    }
    reverse(A.begin()+index+1, A.end());
    return A;
}
