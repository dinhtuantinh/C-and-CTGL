//#include<iostream>
//
//using namespace std;
//void nhap(int a[], int n){
//	for(int i=0; i<n; i++){
//		cin>>a[i];
//	}
//}
//int timX(int a[], int n, int x){
//	for(int i=0; i<n; i++){
//		if(a[i]==x){
//			cout<<i+1<<endl;
//			return 0;
//		}		
//	}
//	for(int i=0; i<n; i++){
//		if(a[i]!=x){
//			cout<<"-1"<<endl;
//			return 0;
//		}		
//	}
//}
//
//int main(){
//	int t;
//	cin>>t;
//	while(t--){
//		int n,x;
//		cin>>n>>x;
//		int a[n];
//		nhap(a,n);
//		timX(a,n,x);
//		
//	}
//
//
//    return 0;
//}
#include<bits/stdc++.h>
using namespace std;
int a[100000];
void nhap(int a[],int n){
	for(int i=1;i<=n;i++){
			cin>>a[i];
		}
}
int tim(int a[],int n,int x){
	for(int i=1;i<=n;i++){
		if(a[i]==x){
			cout<<i<<endl;
			return 0;
		}
	}
	for(int i=1;i<=n;i++){
			if(a[i]!=x){
				cout<<"-1"<<endl;
				return 0;
			}
		}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n>>x;
		
		nhap(a,n);
		
		tim(a,n,x);
	}
	return 0;
}
