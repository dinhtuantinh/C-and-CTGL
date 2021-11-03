#include<bits/stdc++.h>

using namespace std;
void nhap(int a[],int n){
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
}
void xuat(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}	
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int m=n*n;
		int a[m];
		nhap(a,m);
		sort(a,a+m);
		cout<<a[k-1];
		cout<<endl;
	}
	return 0;
}


