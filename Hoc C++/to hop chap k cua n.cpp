#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;
long long A[1001][1001];
const long long mod=1e9+7;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		for(int i=0;i<=1000;i++){
			for(int j=0;j<=i;j++){
				if(i!=j||j!=0){
					A[i][j]=A[i-1][j]+A[i-1][j-1];
				}
				else {
					A[i][j]=1;
				}
				A[i][j]%=mod;
			} 
		}
		cout<<A[n][k]<<endl;
	}
	return 0;
}

