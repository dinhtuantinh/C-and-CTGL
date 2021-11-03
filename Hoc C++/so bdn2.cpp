#include<bits/stdc++.h>
using namespace std;

long long valueOf(string s){
	long long res=0;
	for(int i=0; s[i]; i++)
		res=res*10+(s[i]-'0');
	return res;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		queue<string> q;
		q.push("1");
		while(1){
			string s=q.front();
			if(valueOf(s)%n == 0){
				cout<<s<<endl;
				break;
			}
			q.pop();
			q.push(s+"0");
			q.push(s+"1");
		}
	}
	return 0;
}

