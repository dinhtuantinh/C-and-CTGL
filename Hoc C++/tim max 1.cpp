#include<bits/stdc++.h>
using namespace std;

const int M = 1e9 + 7;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n, res=0;
		cin>>n;
		int a[n+1];
		for(int i=0; i<n; i++) cin>>a[i];
		sort(a, a+n);
		for(int i=0; i<n; i++){
			res = (res % M + (i*a[i]) % M) % M;
		}
		cout<<res<<endl;
	}
	return 0;
}

