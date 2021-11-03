#include<bits/stdc++.h>

using namespace std;
void nhap(int a[],int n){
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
}
void kt(int a[],int n,int k){
	int dem=0;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]+a[j]==k){
				dem++;
			}
		}
	}
	cout<<dem<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n];
		nhap(a,n);
		sort(a,a+n);
		kt(a,n,k);
		cout<<endl;
	}
	return 0;
}
