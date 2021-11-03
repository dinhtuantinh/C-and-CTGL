#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string a, b;
		cin>>a>>b;
		int n=a.size(), m=b.size();
		a = " " + a;
		b = " " + b;
		int f[n+1][m+1];
		for(int i=0; i<=n; i++)
			f[i][0]=i;
		for(int j=0; j<=m; j++)
			f[0][j]=j;
		for(int i=1; i<=n; i++)
			for(int j=1; j<=m; j++)
				if(a[i]==b[j]){
					f[i][j] = f[i-1][j-1];
				}
				else{
					f[i][j] = min(f[i-1][j], min(f[i][j-1], f[i-1][j-1])) + 1;
				}
		cout<<f[n][m]<<endl;
	}
	return 0;
}

