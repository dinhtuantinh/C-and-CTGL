//
//#include<bits/stdc++.h>
//using namespace std;
//long long BCNN(long long a,long long b){
//	return (a*b)/__gcd(a,b);
//}
//int main(){
//	int t;
//	cin>>t;
//	while(t--){
//		int n;
//		cin>>n;
//		if(n==1) cout<<"1"<<endl;
//		else{
//			long long x=BCNN(1,2);
//			for(long long i=3;i<=n;i++){
//				x=BCNN(x,i);
//			}
//			cout<<x<<endl;
//		}
//	}
//	return 0;
//}
#include<bits/stdc++.h>
using namespace std;
long long BCNN(long long a, long long b){
	return (a*b)/__gcd(a,b);
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		if(n==1) cout<<"1"<<endl;
		else{
			long long x=BCNN(1,2);
			for(int i=2;i<=n;i++){
				x=BCNN(i,x);
			}
			cout<<x<<endl;
		}
	}
}
















