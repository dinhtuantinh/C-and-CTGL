#include<bits/stdc++.h>

using namespace std;
void nhap(long long a[],long long n){
	for(long long i=0;i<n;i++){
		cin>>a[i];
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		long long a[n];
		nhap(a,n);
		
		for(long long i=0;i<n;i++){
			if(a[i]!=0){
				cout<<a[i]<<" ";
			}
		}
		for(long long i=0;i<n;i++){
			if(a[i]==0){
				cout<<a[i]<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}
