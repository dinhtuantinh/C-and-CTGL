//#include<bits/stdc++.h>
////Dinh Tuan Tinh
//using namespace std;
//long long const mod=123456789;
//long long tmp(long long x);
//long long du(long long n);
//int main(){
//	int t;
//	cin>>t;
//	while(t--){
//		long long n;
//		cin>>n;
//		n-=1;
//		cout<<du(n);
//		cout<<endl;
//	}
//	return 0;
//}
//long long tmp(long long x){
//	return x*x;
//}
//long long du(long long n){
//	if(n==0) return 1%mod;
//	if(n==1) return 2%mod;
//	long long q=du(n/2);
//	if(n%2==0) return (q%mod * q%mod)%mod;
//	return 2*(tmp(q)%mod)%mod;
//}
#include<bits/stdc++.h>
using namespace std;
long long const mod=123456789;
//long long x, n;
long long tmp(long long x){
	return x*x;
}
long long du(long long n){
	if(n==0) return 1%mod;
	if(n==1) return 2%mod;
	long long q=du(n/2);  
	if(n%2==0) return (q%mod*q%mod)%mod;
	return 2*(tmp(q)%mod)%mod; 
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		n-=1;
		cout<<du(n);
		cout<<endl; 
	} 
	 
} 





















