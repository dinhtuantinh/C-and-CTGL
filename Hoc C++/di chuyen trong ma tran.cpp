#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;
int n,m;
int a[105][105];
int x[105][105];
void nhap(){
	for(int i=0;i<=n;i++){
		for(int j=0;j<=m;j++){
			a[i][j]=x[i][j]=0;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>m;
		nhap();
		x[1][1]=1;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				if(i==1&&j==1) continue;
				x[i][j]=x[i-1][j]+x[i][j-1];
			}
		}
		cout<<x[n][m];
		cout<<endl;
	}
	return 0;
}

