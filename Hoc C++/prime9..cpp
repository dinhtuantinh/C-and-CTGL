//#include<iostream>
//using namespace std;
//void phanTichThuaSoNguyenTo(int n){
//	int dem;
//	for(int i=2;i<=n;i++){
//		dem=0;
//		while(n%i==0){
//			dem++;
//			n/=i;
//		}
//		if(dem){
//			cout<<i;
//			if(dem>=1){
//				cout<<" "<<dem;
//			}
//			if(n>i){
//				cout<<" ";
//			}
//		}
//	}
//}
//int main(){
//	int N,T;
//	cin>>T;
//	while(T--){
//		cin>>N;
//		phanTichThuaSoNguyenTo(N);
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
		int n;
		cin>>n;
		int dem;
		for(int i=2;i<=n;i++){
			dem=0;
			while(n%i==0){
				dem++;
				n/=i;
			}
			if(dem){
				cout<<i;
				if(dem>=1){
					cout<<" "<<dem;
				}
				if(n>i){
					cout<<" ";
				}
			}
		}
		cout<<endl;
	}
	return 0;
}






















