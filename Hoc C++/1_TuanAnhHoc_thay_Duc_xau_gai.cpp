#include<bits/stdc++.h>
//Dinh Tuan Anh
int mod = 1e9+7;
using namespace std;

int main(){
	int t;
	cin>>t;
	for(int test=0; test<t; test++){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;  i<n; i++){
			cin>>a[i];
		}
		sort(a,a+n);
		int res=0;
		for(int i=0; i<n; i++){
			res=res+((a[i]*i)%mod);
		}
		cout<<res<<endl;
	}
	return 0;
}

