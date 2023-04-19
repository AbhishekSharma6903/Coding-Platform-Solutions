#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;


int main() {
    int a;
    cin>>a;
    vector <int> vec(a);
    for(int i=0; i<a; i++){
        cin>>vec[i];
    }   
    sort(vec.begin(),vec.end());
    for(int i=0; i<a; i++){
        cout<<vec[i]<<" ";
    }  
    
    return 0;
}
