#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long a;
		string b;
		cin>>a>>b;
		long long s=0;
		for(long long i=0;i<b.length();i++){
			s=s*10+(b[i]-'0');
			s=s%a;
		}
		long long kq=__gcd(s,a);
		cout<<kq;
		cout<<endl;
	}
	return 0;
}


