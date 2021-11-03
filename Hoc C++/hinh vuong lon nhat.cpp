#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n, m;
		cin>>n>>m;
		int a[n][m], f[n][m];
		for(int i=0; i<n; i++)
			for(int j=0; j<m; j++)
				cin>>a[i][j];
		int res=0;
		for(int i=0; i<n; i++){
			f[i][0]=a[i][0];
			res=max(res, a[i][0]);
		}
		for(int j=0; j<n; j++){
			f[0][j]=a[0][j];
			res=max(res, a[0][j]);
		}
		for(int i=1; i<n; i++)
			for(int j=1; j<m; j++){
				if(a[i][j])
					f[i][j] = min(f[i-1][j-1], min(f[i-1][j], f[i][j-1])) + 1;
				else f[i][j]=0;
				res=max(res, f[i][j]);
			}
		cout<<res<<endl;
	}
	return 0;
}

