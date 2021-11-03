//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//	int t;
//	cin>>t;
//	while(t--){
//		long long n,x;
//		cin >> n >> x;
//		long long a[n];
//		for(long long i=0; i<n; i++){
//			cin>>a[i];
//		}
//		long long tmp[n];
//		for(long long i=0; i<n; i++){
//			tmp[i]=abs(x-a[i]);
//		}
//		for(long long i=0; i<n-1; i++){
//			for(long long j=n-1; j>i; j-- ){
//				if(tmp[j]<tmp[j-1]){
//					swap(tmp[j],tmp[j-1]);
//					swap(a[j],a[j-1]);
//				}
//			}
//		}
//		for(long long i=0; i<n; i++){
//			cout<<a[i]<<" ";
//		}
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
		int n,x;
		cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int tmp[n];
		for(int i=0;i<n;i++){
			tmp[i]=abs(x-a[i]);
		}
		for(int i=0;i<n-1;i++){
			for(int j=n-1;j>i;j--){
				if(tmp[j]<tmp[j-1]){
					swap(tmp[j],tmp[j-1]);
					swap(a[j],a[j-1]);
				}
			}
		}
		for(int i=0;i<n;i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

