#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,x;cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		int count=0;
		for(int i=0;i<n;i++){
			if(a[i]==x) count++;
		}
		cout<<count<<endl;
	}
	return 0;
}

