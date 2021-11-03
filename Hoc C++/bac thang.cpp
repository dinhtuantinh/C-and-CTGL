#include<bits/stdc++.h>
//Dinh Tuan Tinh
const long long mod=1e9+7;

using namespace std;
void Ketqua(int n,int k,long long A[]){
	A[0]=A[1]=1;
	for(int i=2;i<=n;i++){
		for(int j=1;j<=min(i,k);j++){
			A[i]+=A[i-j];
			A[i]%=mod;
		}
	}
	cout<<A[n]<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n, k;
		cin>>n>>k;
		long long A[n+1]={0};
		Ketqua(n,k,A);
	}
	return 0;
}

