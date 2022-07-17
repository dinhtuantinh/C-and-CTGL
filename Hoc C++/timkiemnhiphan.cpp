#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t-->0){
		int n,k;cin>>n>>k;
		int a[n];
		int ktr=0;
		for(int i=0;i<n;i++) cin>>a[i];
		if(k<a[n%2]){
			for(int i=0;i<n%2;i++){
				if(k==a[i]){
					cout<<i+1<<endl;
					ktr=1;
				}
			}
		}
		else{
			for(int i=n%2;i<n;i++){
				if(k==a[i]) {
					cout<<i+1<<endl;
					ktr=1;
				}
			}
		}
		if(ktr==0) cout<<"NO"<<endl;
	}
}
