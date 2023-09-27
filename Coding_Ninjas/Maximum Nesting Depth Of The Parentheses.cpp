int maxDepth(string s) {
	int cnt=0;
	int maxCount = INT_MIN;
	for(int i=0;i<s.length(); i++){
		if(s[i]=='('){
			cnt++;
		}
		else if(s[i]==')'){
			maxCount = max(maxCount, cnt);
			cnt--;
		}
	}
	return maxCount;
}
