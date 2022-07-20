//#include<bits/stdc++.h>
//using namespace std;
//long long n;
//int main(){
//	int t;
//	cin>>t;
//	while(t--){
//		cin>>n;
//		long long dem=0;
//		for(int i=1;i<=sqrt(n);i++){
//			if(n%i==0){
//				if(i*i==n&&i%2==0) dem++;
//				else{
//					if(i%2==0) dem++;
//					if((n/i)%2==0) dem++;
//				}
//			}
//		}
//		cout<<dem;
//		
//		cout<<endl;
//	}	
//}
#include<stdio.h> 
#include<math.h> 
#include<string.h> 
#define ll long long 
// 
int solve(int n){ 
	int cnt = 0;
	for(int i = 1 ; i<= sqrt(n); i++){ 
		if(n%i==0) { 
			if(i%2==0) cnt++; 
			if(i != n/i && (n/i)%2==0 ) cnt++; 
		} 
	} 
	return cnt; 
} // 
int main(){ 
	int t; scanf("%d",&t); 
	while(t--){ 
		int n; scanf("%d",&n); 
		printf("%d\n",solve(n)); 
		} 
	}
