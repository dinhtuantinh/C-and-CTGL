#include<bits/stdc++.h>
using namespace std;
int a[100005], d[100005];
int kt(int n){
	for(int i=0;i<n;i++){
			d[a[i]]++;
			if(d[a[i]]==2){
				
				return a[i];
			}
		}
	return -1;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n; cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int dem=0;
		for(int i=0;i<n;i++){
			d[i]=0;
		}
		
	
		cout<<kt(n)<<endl;
	}
	return 0;
}
