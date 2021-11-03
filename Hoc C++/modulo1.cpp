//#include<iostream>
//#include<fstream>
//using namespace std;
//long long t;
//long long solution(int a, int n, int c){
//	
//	if(n==1){
//		t=a;
//	}
//	else{
//		t=solution(a,n/2,c);
//		t=(t*t)%c;
//		if(n%2==1){
//			t=(t*a)%c;
//		}
//	}
//	return t;
//}
//int main(){
//	int n,a,b,c;
//	cin>>n;
//	while(n--){
//		cin>>a>>b>>c;
//		solution(a%c,b,c);
//		cout<<t<<endl;
//	}
//	return 0;
//}
//
//#include<bits/stdc++.h>
//using namespace std;
//long long n;
//long long solution(int x,int y,int p){
//	if(y==1) n=x;
//	else{
//		n = solution(x,y/2,p);
//		n = (n*n)%p;
//		if(y%2==1) n = (n*x)%p;
//	}
//	return n;
//}
//int main(){
//	int t;
//	cin>>t;
//	while(t--){
//		int x,y,p;
//		cin>>x>>y>>p;
//		cout<<solution(x,y,p)<<endl;
//	}
//	return 0;
//}
#include<bits/stdc++.h>
using namespace std;
long long n;
long long solution(long long x, long long y, long long p){
	if(y==1) n=x;
	else{
		n=solution(x,y/2,p);
		n=(n*n)%p;
		if(y%2==1) n=(n*x)%p;
	}
	return n;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long x,y,p;
		cin>>x>>y>>p;
		cout<<solution(x,y,p)<<endl;
	}
	return 0;
}





















