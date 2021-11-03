//#include<iostream>
//using namespace std;
//int Solution(long long n){
//	if(n<2) return 1;
//	long long f0=0,f1=1,fn=0;
//	while(fn<n){
//		fn=f0+f1;
//		f0=f1;
//		f1=fn;
//		if(fn==n) return 1;
//	}
//	return 0;
//}
//int main(){
//	int t;
//	cin>>t;
//	while(t--){
//		long long n;
//		cin>>n;
//		if(Solution(n)) cout<<"YES";
//		else cout<<"NO";
//		cout<<endl;
//	}
//	return 0;
//}
#include<bits/stdc++.h>
using namespace std;
int kt(long long n){
	if(n<2) return 1;
	long long f0=0,f1=1,fn=0;
	while(fn<n){
		fn=f0+f1;
		f0=f1;
		f1=fn;
		if(fn==n) return 1;
	}
	return 0;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		if(kt(n)) cout<<"YES";
		else cout<<"NO";
		cout<<endl;
	}
	return 0;
}





















