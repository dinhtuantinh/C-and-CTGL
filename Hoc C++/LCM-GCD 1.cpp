//#include<iostream>
//#include<math.h>
//using namespace std;
//
//int gcd(int a, int b){
//	if(a==0||b==0){
//		return a+b;
//	}
//	while(a!=b){
//		if(a>b){
//			a-=b;
//		}
//		else{
//			b-=a;
//		}
//	}
//	return a;
//}
//int main(){
//	int T;
//	cin>>T;
//	for(int i=1; i<=T;i++){
//		long long a, b;
//		cin>>a>>b;
//		long long lcm=a*b/gcd(a,b);
//		cout<<lcm<<" "<<gcd(a,b)<<endl;
//	}
//	
//	return 0;
//}
//#include<bits/stdc++.h>
//using namespace std;
//int gcd(long long a,long long b){
//	if(a==0||b==0){
//		return a+b;
//	}
//	while(a!=b){
//		if(a>b){
//			a-=b;
//		}
//		else{
//			b-=a;
//		}
//	}
//	return a;
//}
//int main(){
//	int t;
//	cin>>t;
//	while(t--){
//		long long a,b;
//		cin>>a>>b;
//		long long lcm=(a*b)/gcd(a,b);
//		cout<<lcm<<" "<<gcd(a,b);
//		cout<<endl;
//	}
//	return 0;
//}
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long a,b;
		cin>>a>>b;
		long long lcd=(a*b)/__gcd(a,b);
		cout<<lcd<<" "<<__gcd(a,b);
		cout<<endl;
	}
	return 0;
}



























