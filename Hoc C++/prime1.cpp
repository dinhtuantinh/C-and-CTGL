//#include<iostream>
//#include<math.h>
//using namespace std;
//int main(){
//	int n;
//	long long a,i,SQ;
//	cin>>n;
//	while(n--){
//		cin>>a;
//		i=2;
//		SQ =sqrt(a)+1;
//		while(i<SQ&&a%i==0){
//			a=a/i;
//			cout<<i<<" ";
//		}
//		i++;
//		while(i<SQ&&a!=1){
//			while(a%i==0){
//				a=a/i;
//				cout<<i<<" ";
//			}
//			i=i+2;
//		}
//		if(a!=1){
//			cout<<a;
//			
//		}
//		cout<<endl;
//	}
//	return 0;
//}
#include<bits/stdc++.h>
using namespace std;
long long n;
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		long long i,k;
		i=2;
		k=sqrt(n);
		while(i<=sqrt(n)&&n%i==0){
			cout<<i<<" ";
			n=n/i;
		}
		i++;
		while(i<=k&&n!=1){
			while(n%i==0){
				cout<<i<<" ";
				n/=i;
			}
			i+=2;
		}
		if(n!=1) cout<<n;
		cout<<endl;
	}	
}



