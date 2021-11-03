#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,x;cin>>n>>x;
		int a[n],b[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n;i++){
			b[i]=abs(a[i]-x);
		}
		for(int i=0;i<n-1;i++){
			for(int j=n-1;j>i;j--){
				if(b[j]<b[j-1]){
					swap(b[j],b[j-1]);
					swap(a[j],a[j-1]);
				}
			}
		}
		for(int i=0;i<n;i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
