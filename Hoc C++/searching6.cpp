#include<bits/stdc++.h>
using namespace std;
//void nhap(int a[],int n){
//	for(int i=0;i<n;i++){
//		cin>>a[i];
//	}
//}
//void tong(int a[],int n){
//	int sum=a[0]+a[1];
//	int kq=sum;
//	int s=0;
//	for(int i=0;i<n-1;i++){
//		for(int j=i+1;j<n;j++){
//			s=a[i]+a[j];
//			if((abs)(a[i]+a[j])<(abs)(sum)){
//				sum=s;
//				kq=s;
//			}
//		}
//	}
//	cout<<sum<<endl;
//}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		int sum=a[0]+a[1];
		int kq=sum, s=0;
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				s=a[i]+a[j];
				if(abs(a[i]+a[j])<abs(sum)){
					sum=s;
					kq=s;
				}
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}

