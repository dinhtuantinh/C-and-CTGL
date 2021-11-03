#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;
int n;
int a[101];
int A1[101],A2[101];
void nhap(){
		cin>>n;
		
		for(int i=1;i<=n;i++){
			cin>>a[i];
			A1[i]=a[i];
			A2[i]=a[i];
		}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		nhap();
		for(int i=1;i<n;i++){
			for(int j=1;j<i;j++){
				if(a[i]>a[j]){
					A1[i]=max(A1[i],A1[j]+a[i]);
				}
			}
		}
		for(int i=n-1;i>=0;i--){
			for(int j=n;j>i;j--){
				if(a[i]>a[j]){
					A2[i]=max(A2[i],A2[j]+a[i]);
				}
			}
		}
		int kq=0;
		for(int i=1;i<=n;i++){
			kq=max(kq,A1[i]+A2[i]-a[i]);
		}
		cout<<kq<<endl;
	}
	return 0;
}

