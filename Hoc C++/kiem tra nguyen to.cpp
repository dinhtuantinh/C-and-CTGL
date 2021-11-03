#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;
bool snt(int n){
	if(n<2) return false;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return false;
	}
	return true;
}
int main(){
//	int t;
//	cin>>t;
//	while(t--){
		int n,m;
		cin>>n>>m;
		int a[n][m];
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>a[i][j];
			}
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(snt(a[i][j])) cout<<"1"<<" ";
				else cout<<"0"<<" ";
			}
			cout<<endl;
		}
//	}
	return 0;
}

