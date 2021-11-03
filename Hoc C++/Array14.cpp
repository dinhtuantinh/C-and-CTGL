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
		int k,n;
		cin>>k>>n;
		int m=k*n;
		int a[m];
		nhap(a,m);
		sort(a,a+m);
		xuat(a,m);
		cout<<endl;
	}
	return 0;
}


