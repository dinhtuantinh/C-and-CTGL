#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;
bool snt(long long n){
	if(n<2) return false;
	for(long long i=2;i<=sqrt(n);i++){
		if(n%i==0) return false;
	}
	return true;
}
int main(){
//	int t;cin>>t;
//	while(t--){
		long long n;
		cin>>n;
		if(snt(n)) cout<<"YES";
		else cout<<"NO";
		cout<<endl;
//	}
	return 0;
}

