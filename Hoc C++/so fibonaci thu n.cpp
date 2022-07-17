#include<bits/stdc++.h>

using namespace std;
//long long F[1000006]={0};
long long mod = 1e9+7;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long F[100];
		F[0]=0;F[1]=1;
		int n;cin>>n;
		for(int i=2;i<=n;i++){
			F[i]=F[i-1]+F[i-2];
			F[i]=F[i]%mod;
		}
		cout<<F[n]<<endl;
	}
	return 0;
}

