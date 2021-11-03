//#include<iostream>
//using namespace std;
//bool check[1000];
//bool Solution(long long n){
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
//	int n, a[100],i;
//	cin>>t;
//	for(i=0;i<1001;i++){
//		check[i]=Solution(i);
//	}
//	while(t--){
//		cin>>n;
//		for(i=0;i<n;i++){
//			cin>>a[i];
//		}
//		for(i=0;i<n;i++){
//			if(check[a[i]]) cout<<a[i]<<" ";
//		}
//		cout<<endl;
//	}
//	return 0;
//}

#include<bits/stdc++.h>
using namespace std;
bool check[1000];
bool solution(int n){
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
	for(int i=0;i<1000;i++){
		check[i]=solution(i);
	}
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<n;i++){
			if(check[a[i]]) cout<<a[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
























