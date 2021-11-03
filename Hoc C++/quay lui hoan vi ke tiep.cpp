#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n+5];
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		int i=n;
		while(i>0&&a[i-1]<a[i]) i--;
		if(i<=0){
			for(int j=1;j<=n;j++){
				cout<<j<<" ";
			}
			cout<<endl;
		}
		else{
			a[i]+=1;
			for(int j=i+1;j<n;j++){
				for(int k=j+1;k<=n;k++){
					swap(a[j],a[k]);
				}
			}
			for(int i=1;i<=n;i++){
				cout<<a[i]<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
}

