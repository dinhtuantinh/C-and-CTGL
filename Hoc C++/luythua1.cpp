#include<bits/stdc++.h>
using namespace std;
int mod = 1e9+7;
long long Mod(long long a, long long b){
	if(b==0) return 1;
	if(b==1) return a%mod;
	long long x = Mod(a,b/2);
	if(b%2==0) return x*x%mod;
	return a*(x*x%mod)%mod;
}
int main(){
	int n;
	cin>>n;
	while(n-->0){
		long long a,b;
		cin>>a>>b;
		cout<<Mod(a,b)<<endl;
	}
}
