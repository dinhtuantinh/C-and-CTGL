#include<bits/stdc++.h>
using namespace std;
int kt(long long n){
	if(n<2) return 0;
	for(long long i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		if(kt(n)==1) cout<<"YES";
		else cout<<"NO";
		cout<<endl;
	}
	return 0;
}

