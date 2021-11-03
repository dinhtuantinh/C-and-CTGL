//#include<bits/stdc++.h>
////Dinh Tuan Tinh
//using namespace std;
//
//int main(){
//	int t;
//	cin>>t;
//	while(t--){
//		long long n,k;cin>>n>>k;
//		long long a[n];
//		for(long long i=0;i<n;i++) cin>>a[i];
//		int dem=0;
//		for(long long i=0;i<n-1;i++){
//			for(long long j=i+1;j<n;j++){
//				if(a[i]+a[j]>=k) dem++;
//			}
//		}
//		cout<<dem<<endl;
//	}
//	return 0;
//}
#include<bits/stdc++.h>
using namespace std;

struct work{
	int s;
	int f;
};

bool cmp(work a, work b){
	return a.f<b.f;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		work a[n];
		for(int i=0; i<n; i++)
			cin>>a[i].s>>a[i].f;
		sort(a, a+n, cmp);
		int j = 0;
		int res=1;
		for(int i=1; i<n; i++){
			if(a[i].s > a[j].f){
				j=i;
				res++;
			}
		}
		cout<<res<<endl;
	}
	return 0;
}

