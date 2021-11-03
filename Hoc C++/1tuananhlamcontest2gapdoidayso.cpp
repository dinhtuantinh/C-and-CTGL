#include<bits/stdc++.h>

using namespace std;
long long kimngan(int n);
int main(){
	//ios_base::sync_with_stdio(0);cin.tie(0);
	int t;
	cin>>t;
	for(int yeu=t; yeu>0; yeu--){
		int n;
		long long k;
		cin>>n>>k;
		long long x=kimngan(n)/2;
		while(1){	
			if(k>=x){
				k=x-(k-x);
			}
			if(n==1){
				cout<<1;
				break;
			}
			if(x==k){
				cout<<n;
				break;
			}
			n--;
			x/=2;
		}
		cout<<endl;
	}
	return 0;
}
long long kimngan(int n){
	if(n==1) return 2;
	if(n==0) return 1;
	long long m=kimngan(n/2);
	if(n%2) return 2*m*m;
	return m*m;
}
