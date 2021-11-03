#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;
long long chia_mu(int n){
	if(n==0) return 1;
	if(n==1) return 2;
	long long m=chia_mu(n/2);
	if(n%2) return 2*m*m;
	return m*m;
}
int main(){
	//ios_base::sync_with_stdio(0);cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n;
		long long k;
		cin>>n>>k;
		long long x=chia_mu(n)/2;
		while(1){
			if(n==1){
				cout<<1;
				break;
			}
			if(k>=x){
				k=x-(k-x);
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

