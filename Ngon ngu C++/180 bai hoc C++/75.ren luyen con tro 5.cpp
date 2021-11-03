#include<bits/stdc++.h>

using namespace std;
int *Capphatbonho(int n){
	int *pM=new int[n];
	return pM;
} 
void Nhap(int *&pM,int n){
	for(int i=0;i<n;i++){
		cout<<"Nhap phan tu "<<i<<":";
		cin>>*(pM+i);
	}
}
void Xuat(int *pM,int n){
	for(int i=0;i<n;i++){
		cout<<*(pM+i)<<"\t";
	}
}
int *DanhsachMAX(int *pM,int n){
	int m=n>3?3:n;
	int *pX=Capphatbonho(m);
	sort(pM,pM+n);
	for(int i=0;i<m;i++){
		*(pX+i)=*(pM+i);
	}
	return pX;
}

int main(){
	int *pM=Capphatbonho(5);
	Nhap(pM,5);
	cout<<"Mang vua nhap:\n";
	Xuat(pM,5);
	cout<<"\n";
	int *pX=DanhsachMAX(pM,5);
	cout<<"Danh sach MAX:\n";
	Xuat(pX,3);
	return 0;
}


