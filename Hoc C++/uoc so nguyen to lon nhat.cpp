//#include<bits/stdc++.h>
////Dinh Tuan Tinh
//using namespace std;
//bool nt(int n){
//	if(n<2) return false;
//	for(int i=2;i<=sqrt(n);i++){
//		if(n%i==0) return false;
//	}
//	return true;
//}
//int uoc(int n){
//	int i=1;
//	long long x;
//	for(i=1;i<=sqrt(n);i++){
//		if(n%i==0){
//			if(nt(n/i)){		
//				return n/i;
//			}
//			else if(nt(i))
//			x=i;		
//		}
//	}
//	return x;
//}
//int main(){
//	int t;cin>>t;
//	while(t--){
//		long long n;cin>>n;
//		cout<<uoc(n)<<endl;
//	}
//	return 0;
//}
#include<stdio.h> 
int main(){ 
	int t; scanf("%d", &t); 
	while(t--){ 
		long i=2, n; 
		scanf("%ld", &n); 
		while(i<=n/i){ 
			if(n%i==0) n/=i; 
			if(n%i!=0) i++; 
		} 
		printf("%ld\n", n); 
	} 
}
