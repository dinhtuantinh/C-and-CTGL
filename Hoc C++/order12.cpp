//#include<iostream>
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
//int timX(int a[], int n){
//	int i;
//	if (a[0] > 1 || a[n-1] < 0){
//  		return 1;
//	}
//	for (i=0; i<n; i++){
//		if(a[i]<=0&&a[i+1]>1) return 1;
//	}
//	for (i = 1; i < n - 1; i++){
//   		if (a[i] <= 0 && a[i+1] <= 0) {
//       		continue;
//   		}
//   		if (a[i] >= 0 && a[i] + 1 < a[i + 1]) {
//    		 return a[i] + 1;
//   		}
//	}return  (a[i] + 1);	
//}
//int main(){
//	int t;
//	cin>>t;
//	while(t--){
//		int n;
//		cin>>n;
//		int a[n];
//		nhap(a,n);
//		sapXep(a,n);
//		int k=timX(a,n);
//		cout<<k<<endl;	
//	}
//    return 0;
//}
#include<bits/stdc++.h>
using namespace std;
int timX(int a[],int n){
	int i;
	if(a[0]>1||a[n-1]<0){
		return 1;
	}
	for(i=0;i<n;i++){
		if(a[i]<=0&&a[i+1]>1) return 1;
	}
	for(i=1;i<n-1;i++){
		if(a[i]<=0&&a[i+1]<=0) continue;
		if(a[i]>=0&&a[i]+1<a[i+1]) return a[i]+1;
	}
	return (a[i]+1);
}
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
		cout<<timX(a,n);
		cout<<endl;
	}
	return 0;
}






















