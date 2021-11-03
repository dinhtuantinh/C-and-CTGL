#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		int dem=0;
		for(int i=0;i<n;i++){
			if(a[i]+1!=a[i+1]) dem=dem+a[i+1]-a[i]+1;
		}
		cout<<dem<<endl;
	}
	return 0;
}

