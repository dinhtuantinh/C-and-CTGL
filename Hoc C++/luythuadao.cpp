#include<bits/stdc++.h>
using namespace std;
int mod = 1e9+7;
long long dao(long long n){
	long long a=0;
	while(n>0){
		a=a*10+n%10;
		n/=10;
	}
	return a;
}
long long Mod(long long a, long long b){
	if(b==0) return 1;
	if(b==1) return a%mod;
	long long x = Mod(a,b/2);
	if(b%2==0) return x*x%mod;
	return a*(x*x%mod)%mod;
}

int main(){
	int n;cin>>n;
	while(n-->0){
		long long n;
		cin>>n;
		long long r = dao(n);
		cout<<Mod(n,r)<<endl;
	}
}
