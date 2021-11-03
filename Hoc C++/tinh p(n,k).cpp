#include<bits/stdc++.h>
using namespace std;

int M=1e9+7;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n, k;
		cin>>n>>k;
		if(k>n) cout<<0<<endl;
		else{
			long long res=n;
			for(int i=1; i<k; i++)
				res = (res*(n-i))%M;
			cout<<res<<endl;
		}
	}
	return 0;
}

