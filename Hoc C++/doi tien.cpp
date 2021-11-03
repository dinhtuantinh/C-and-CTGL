//#include<bits/stdc++.h>
////Dinh Tuan Tinh
//using namespace std;
//
//int main(){
//	int t;
//	cin>>t;
//	int a[]={1000,500,200,100,50,20,10,5,2,1};
//	int n=10;
//	while(t--){
//		int res=0;
//		long long k;
//		cin>>k;
//		for(int i=0;i<n;i++){
//			res+=k/a[i];
//			k%=a[i];
//		}
//		cout<<res<<endl;
//	}
//	return 0;
//}
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[10]={1000,500,200,100,50,20,10,5,2,1};
		int res=0;
		for(int i=0;i<10;i++){
			res+=n/a[i];
			n%=a[i];
		}
		cout<<res<<endl;
	}
}
