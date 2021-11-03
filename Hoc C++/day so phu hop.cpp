#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n],b[n];
		int check=0;
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<n;i++) cin>>b[i];
		sort(a,a+n);
		sort(b,b+n);
		for(int i=0;i<n;i++){
			if(a[i]>b[i]) {
				check=1;
				cout<<"NO";
				break;
			}
		}
		if(check==0) cout<<"YES";
		cout<<endl;
	}
	return 0;
}

