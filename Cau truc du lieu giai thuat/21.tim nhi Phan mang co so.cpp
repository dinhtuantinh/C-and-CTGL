#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;
void nhap(float F[],int n){
	for(int i=0;i<n;i++){
		cout<<"[F"<<i<<"]= ";
		cin>>F[i];
	}
}
void xuat(float F[],int n){
	for(int i=0;i<n;i++){
		cout<<F[i]<<"\t";
	}
}
int BinarySearch(float F[],int n,float x){
	int left=0;
	int right=n-1;
	int mid;
	do{
		mid=(left+right)/2;
		if(F[mid]==x) 
			return mid;
		else if(F[mid]>x)
			left=mid+1;
		else
			right=mid-1;
	}
	while(left<=right);
	return -1;
}
int main(){
	int n;
	cout<<"Nhap n:";cin>>n;
	float F[n];
	cout<<"Nhap phan tu mang:\n";
	nhap(F,n);
	cout<<"Mang sau nhap:\n";
	xuat(F,n);
	float x;
	cout<<"\nMuon tim: ";
	cin>>x;
	int kq=BinarySearch(F,n,x);
	if(kq==-1){
		cout<<x<<" Khong co trong mang.";
	}
	else{
		cout<<x<<" o vi tri "<<kq<<endl;
	}
	return 0;
}


