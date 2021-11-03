//#include<bits/stdc++.h>
//
//using namespace std;
//
//int main(){
//	int a,n,dem,t;
//	long long b;
//	cin>>n;
//	while(n--){
//		cin>>a>>b;
//		dem=a/b;
//		a=a%b;
//		t=0;
//		if(dem>0){
//			t=(b*(b-1)/2)*dem;
//		}
//		t+=a*(a+1)/2;
//		cout<<t<<endl;
//	}
//	return 0;
//}
//
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		long long k;
		cin>>n>>k;
		int sum=0, du;
		while(n>0){
			du=n%k;
			sum+=du;
			n--;
		}
		cout<<sum<<endl;
	}
}




















