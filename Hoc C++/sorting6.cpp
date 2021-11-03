#include<iostream>

using namespace std;
void nhap(int a[],int n){
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
}
void sapxep(int a[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[j]<a[i]){
				int tam=a[i];
				a[i]=a[j];
				a[j]=tam;
			}
		}
	}
}
void xuat(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		nhap(a,n);
		sapxep(a,n);
		xuat(a,n);
		cout<<endl;
	}
	return 0;
}


