#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n+1];
		for(int i=1; i<=n; i++)
			cin>>a[i];
		int f[n+1];
		f[0]=0;
		for(int i=1; i<=n; i++)
			f[i]=f[i-1]+a[i];
		int res=f[1]-f[0];
		for(int i=0; i<n; i++)
			for(int j=i+1; j<=n; j++)
				if(f[j]-f[i]>res) res=f[j]-f[i];
		cout<<res<<endl;
	}
	return 0;
}
