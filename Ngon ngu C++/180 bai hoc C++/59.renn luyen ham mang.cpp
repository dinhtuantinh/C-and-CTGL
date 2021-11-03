#include<iostream>

using namespace std;
void nhap(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<"M["<<i<<"]= ";
		cin>>a[i];
	}
}
void xuatmang(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<"\t";
	}
}
int timk(int a[],int n,int k){
	for(int i=0;i<n;i++){
		if(a[i]==k){
			return i+1;
		}
	}
	return -1;
}
int main(){
	int n,k;
	cin>>n>>k;
	int a[n];
	nhap(a,n);
	xuatmang(a,n);
	cout<<"\n";
	int kq=timk(a,n,k);
	if(kq==-1) cout<<"khong tim thay k"<<endl;
	else cout<<kq<<endl;
	return 0;
}


