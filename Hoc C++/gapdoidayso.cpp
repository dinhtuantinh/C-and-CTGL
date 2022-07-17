#include<bits/stdc++.h>
using namespace std;
int tinh(long long n, long long k){
	long long x = pow(2,n-1);
	if(x==k) return n;
	if(x>k) return tinh(n-1,k);
	return tinh(n-1,k-x);
}
int main(){
	int t;
	cin>>t;
	while(t-->0){
		long long n,k;cin>>n>>k;
		cout<<tinh(n,k)<<endl;
	}
}
