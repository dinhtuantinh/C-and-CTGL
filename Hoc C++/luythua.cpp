#include<bits/stdc++.h>
using namespace std;
const long long mod = 1e9+7;

long long Pow(long long a, long long b){
	if(b==0) return 1;
	long long tmp=Pow(a,b/2);
	if(b%2==0) return tmp*tmp%mod;
	return a*(tmp*tmp%mod)%mod;
}
int main(){
	long long a, b;
	while(1){
		cin>>a>>b;
		if(a==0 && b==0) break;
		else{
			cout<<Pow(a,b)<<endl;
		}
	}
	
}
