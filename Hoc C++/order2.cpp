//#include<iostream>
//
//using namespace std;
//void nhap(int a[], int n){
//	for(int i=0; i<n; i++){
//		cin>>a[i];
//	}
//}
//void sapXep(int a[], int n){
//	for(int i=0; i<n-1; i++){
//		for(int j=i; j<n; j++){
//			if(a[i]>a[j]){
//				int tam=a[i];
//				a[i]=a[j];
//				a[j]=tam;
//			}
//		}
//	}	
//}
//int main(){
//	int t;
//	cin>>t;
//	while(t--){
//		long long n;
//		cin>>n;
//		int a[n];
//		nhap(a,n);
//		sapXep(a,n);
//		cout<<a[n-1]<<endl;
//	}
//
//
//    return 0;
//}
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		cout<<a[n-1]<<endl;
	}
}
