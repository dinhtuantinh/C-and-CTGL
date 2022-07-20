#include<bits/stdc++.h>
using namespace std;
int maxb[1001][1001];
int n, m;
int a[1001], b[1001];
void nhap(){
		cin>>n>>m;
		for(int i=1; i<=n; i++)
			cin>>a[i];
		for(int i=1; i<=n; i++)
			cin>>b[i];
}
int main(){
	int t;
	cin>>t;
	while(t--){
		nhap();
		memset(maxb, 0, sizeof(maxb));
		for(int i=1; i<=n; i++)
			for(int l=1; l<=m; l++){
				maxb[i][l]=maxb[i-1][l];
				if(a[i]<=l && (maxb[i-1][l-a[i]] + b[i] > maxb[i-1][l]))
					maxb[i][l] = maxb[i-1][l-a[i]] + b[i];
			}
		cout<<maxb[n][m]<<endl;
	}
	return 0;
}

