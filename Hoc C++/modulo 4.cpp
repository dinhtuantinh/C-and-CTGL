//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//	int n,a,b,dem,t,j;
//	cin>>n;
//	while(n--){
//		cin>>a>>b;
//		dem=a/b;
//		j=b;
//		a=a%b;
//		t=0;
//		if(dem>0){
//			t=(b*(b-1)/2)*dem;
//		}
//		t+=a*(a+1)/2;
//		if(t==j) cout<<1;
//		else cout<<0;
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
		long long n, k;
		cin>>n>>k;
		long long x,sum=0, du;
		x=n;
		while(n>0){
			du=n%k;
			sum+=du;
			n--;
		}
		if(x==sum){
			cout<<"1";
		}
		else{
			cout<<"0";
		}
		cout<<endl;
	}
	return 0;
} 





















