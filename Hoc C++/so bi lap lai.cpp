#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;cin>>n;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		int dem[100005];
		for(int i=0;i<100005;i++){
			dem[i]=0;
		}
		for(int i=0;i<n;i++){
			dem[a[i]]++;
		}
		int s=0;
		for(int i=0;i<100005;i++){
			if(dem[i]>1) s+=dem[i];
		}
		cout<<s<<endl;
	}
	return 0;
}

