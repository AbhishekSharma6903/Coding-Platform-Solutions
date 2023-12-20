#include <bits/stdc++.h>

void helper(stack<int> &s, int n, int cnt){
   if(s.empty()){
      return ;
   }
   int x = s.top();
   s.pop();
   helper(s,  n,  cnt+1);
   if(cnt!= n/2 ){
      s.push(x);
   }
}

void deleteMiddle(stack<int>&s, int N){
	int count =0;
   helper(s, N, count);
   
}
