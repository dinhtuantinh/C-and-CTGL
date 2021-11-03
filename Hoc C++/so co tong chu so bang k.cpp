#include<bits/stdc++.h>
using namespace std;

const int MOD=1e9+7;
int n, k;
int f[101][50001];

int main(){
	for(int i=0; i<=100; i++)
		f[i][0]=0;
	for(int j=0; j<=50000; j++)
		f[0][j]=0;
	for(int j=1; j<=9; j++)
		f[1][j]=1;
	for(int i=1; i<=100; i++)
		for(int x=0; x<=9; x++)
			for(int j=x; j<=50000; j++)
				f[i][j] = (f[i][j] + f[i-1][j-x])%MOD;
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		cout<<f[n][k]<<endl;	
	}
	return 0;
}

