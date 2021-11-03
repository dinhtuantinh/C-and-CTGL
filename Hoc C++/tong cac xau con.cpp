#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int n=s.length();
		long long sum[n];
		long long res = s[0]-'0';
		sum[0] = s[0]-'0';
		for(int i=1; s[i]; i++){
			sum[i] = (i+1)*(s[i]-'0') + sum[i-1]*10;
			res+=sum[i];
		}
		cout<<res<<endl;
	}
	return 0;
}

