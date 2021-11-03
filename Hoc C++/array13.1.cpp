#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int a1[n],a2[m];
		for(int i=0;i<n;i++) cin>>a1[i];
		for(int i=0;i<m;i++) cin>>a2[i];
		sort(a1,a1+n);
		int x=0;
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				if(a1[j]==a2[i]){
					cout<<a1[j]<<" ";
					a1[j]=x;
				}
				if(a1[j]>a2[i]) break;
			}
		}
		for(int i=0;i<n;i++){
			if(a1[i]!=x) cout<<a1[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

