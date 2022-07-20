//#include<bits/stdc++.h>
////Dinh Tuan Tinh
//using namespace std;
//
//int main(){
//	int t;
//	cin>>t;
//	while(t--){
//		long long n;
//		cin>>n;
//		long long k=n;
//		long long res=0;
//		if(sqrt(n)*sqrt(n)==n){
//			res+=sqrt(n);
//		}
//		for(long long i=1;i<sqrt(n);i++){
//			if(k%i==0){
//				res=res+i+(k/i);
//			}
//		}
//		cout<<res<<endl;
//	}
//	return 0;
//}
#include<stdio.h> 
#include<math.h> 
int pt(int n){ 
	long long sum=0; 
	for(int i=2;i<=sqrt(n);i++){ 
		if(n%i==0){ 
			while(n%i==0){ 
				sum+=i; 
				n/=i; 
			} 
		} 
	} 
	if(n>1) sum+=n; 
	return sum; 
} 
int main(){ 
	int n; scanf("%d",&n); 
	long long sum=0;
	for(int i=1;i<=n;i++){ 
		int x; scanf("%d",&x); 
		sum+=pt(x); 
	} 
	printf("%lld",sum); 
}

