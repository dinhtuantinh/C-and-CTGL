#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		long long k=n;
		long long res=0;
		if(sqrt(n)*sqrt(n)==n){
			res+=sqrt(n);
		}
		for(long long i=1;i<sqrt(n);i++){
			if(k%i==0){
				res=res+i+(k/i);
			}
		}
		cout<<res<<endl;
	}
	return 0;
}

