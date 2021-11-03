#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int a[n],b[m];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<m;i++){
			cin>>b[i];
		}
		int Min=min(m,n);
		int hop[m+n],giao[Min], demhop=0, demgiao=0;
		int i=0,j=0;
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
		for(int k=0;k<demhop;k++) cout<<hop[k]<<" ";
		cout<<endl;
		i=0;j=0;
		while( i<n && j<m){
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
		for(int k=0;k<demgiao;k++){
			cout<<giao[k]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
