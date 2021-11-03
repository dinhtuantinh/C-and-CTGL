#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n, k, a;
		cin>>n>>k;
		int f[n+1][k];
		f[0][0]=0;
		for(int j=1; j<k; j++)
			f[0][j] = -10000;
		for(int i=1; i<=n; i++){
			cin>>a;
			a%=k;
			for(int j=0; j<k; j++){
				f[i][j] = max(f[i-1][j], f[i-1][(j+k-a)%k] + 1);
			}
		}
		cout<<f[n][0]<<endl;	
	}
	return 0;
}

