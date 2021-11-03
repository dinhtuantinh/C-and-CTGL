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
		memset(f, 0, sizeof(f));
		a[0]=0;
		int res=1;
		for(int i=1; i<=n; i++){
			for(int j=0; j<i; j++)
				if(a[j]<a[i]) f[i]=max(f[i], f[j]+a[i]);
			res=max(res, f[i]);
		}
		cout<<res<<endl;
	}
	return 0;
}

