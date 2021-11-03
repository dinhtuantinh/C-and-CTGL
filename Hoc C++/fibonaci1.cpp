//#include<iostream>
//#define modulo 1000000007
//using namespace std;
//long long Solution(int n){
//	if (n < 2) {
//		return 1;
//	}
//	long long a=0,b=1,c;
//	while(n-->1){
//		c=(a%modulo+b%modulo)%modulo;
//		a=b;
//		b=c;
//	}
//	return c;
//}
//int main(){
//	int T,n;
//	cin>>T;
//	while(T--){
//		cin>>n;
//		cout<<Solution(n);
//		cout<<endl;
//	}
//	return 0;
//}
//#include<bits/stdc++.h>
//#define modulo 1000000007
//using namespace std;
//long long solution(int n){
//	if(n<2){
//		return 1;
//	}
//	long long a=0,b=1,c;
//	while(n-->1){
//		c=(a+b)%modulo;
//		a=b;
//		b=c;
//	}
//	return c;
//}
//int main(){
//	int t;
//	cin>>t;
//	while(t--){
//		int n;
//		cin>>n;
//		cout<<solution(n)<<endl;
//	}
//	return 0;
//}
#include<bits/stdc++.h>
using namespace std;
#define modulo 1000000007
long long fibonacci(int n){
	if(n<2) return 1;
	long long a=0, b=1, c;
	while(n-->1){
		c=(a+b)%modulo;
		a=b;
		b=c;
	}
	return c;
	
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		cout<<fibonacci(n)<<endl;
	}
	return 0;
}

















