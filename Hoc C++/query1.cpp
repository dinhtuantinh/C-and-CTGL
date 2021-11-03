//#include<bits/stdc++.h>
//
//using namespace std;
//void nhap(int a[],int n){
//	for(int i=1;i<=n;i++){
//		cin>>a[i];
//	}
//}
//void kt(int a[],int n,int L,int R){
//	int m=0;
//	for(int i=1;i<=n;i++){
//		if(i>=L&&i<=R){
//			m=m+a[i];
//		}
//	}
//	cout<<m;
//	
//}
//int main(){
//	int t;
//	cin>>t;
//	while(t--){
//		int n,Q;
//		cin>>n>>Q;
//		int a[n];
//		nhap(a,n);
//		while(Q--){
//			int L,R;
//			cin>>L>>R;
//			if(L>R){
//				int tam=L;
//				L=R;
//				R=tam;
//			}
//			kt(a,n,L,R);
//			cout<<endl;
//		}
//		cout<<endl;
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
		int n,q;
		cin>>n>>q;
		int a[n];
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		while(q--){
			int L,R;
			cin>>L>>R;
			int s=0;
			for(int i=1;i<=n;i++){
				if(i>=L&&i<=R){
					s+=a[i];
				}
			}
			cout<<s<<endl;
		}
		cout<<endl;
	}
	return 0;
}
