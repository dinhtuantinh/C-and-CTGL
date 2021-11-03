#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long n, m;
		cin>>n>>m;
		long a[n], b[m];
		for(long i=0;i<n;i++){
			cin>>a[i];
		}
		for(long i=0;i<m;i++){
			cin>>b[i];
		}
		long ming=min(m,n);
		long hop[m+n], giao[ming];
		long demhop=0, demgiao=0;
		long i=0,j=0;
		while(i<n&&j<m){
			if(a[i]<b[j]){
				hop[demhop++]=a[i++];
			}
			else if(a[i]>b[j]){
				hop[demhop++]=b[j++];
			}
			else{
				hop[demhop++]=a[i++];
				j++;
			}
		}
		while(i<n){
			hop[demhop++]=a[i++];
		}
		while(j<m){
			hop[demhop++]=b[j++];
		}
		for(long k=0;k<demhop;k++){
			cout<<hop[k]<<" ";
		}
		cout<<endl;
		i=0;j=0;
		while(i<n&&j<m){
			if(a[i]<b[j]){
				i++;
			}
			else if(a[i]>b[j]){
				j++;
			}
			else{
				giao[demgiao++]=a[i++];
				j++;
			}
		}
		for(long k=0;k<demgiao;k++){
			cout<<giao[k]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
