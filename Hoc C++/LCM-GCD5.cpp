#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long a,x,y;
		cin>>a>>x>>y;
		long long tmp=__gcd(x,y);
		for(long long i=1;i<=tmp;i++){
			cout<<a;
		}
		cout<<endl;
	}
	return 0;
}

























