#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int k, res=0;
		string s;
		cin>>k>>s;
		int fre[26];
		memset(fre, 0, sizeof(fre));
		for(int i=0; s[i]; i++)
			fre[s[i]-'A']++;
		priority_queue<int> q;
		for(int i=0; i<26; i++){
			if(fre[i]>0) q.push(fre[i]);
		}
		while(k--){
			int x = q.top();
			q.pop();
			q.push(x-1);
		}
		while(!q.empty()){
			res += q.top()*q.top();
			q.pop();
		}
		cout<<res<<endl;
	}
	return 0;
}
