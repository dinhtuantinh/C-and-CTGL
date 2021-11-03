#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a,a+n);
		int s=abs(a[1]-a[0]);
		for(int i=1;i<n-1;i++){	
			int tmp=abs(a[i+1]-a[i]);
			if(tmp<s) s=tmp;
		}
		cout<<s<<endl;
	}
	return 0;
}

