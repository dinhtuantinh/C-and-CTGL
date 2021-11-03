#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;
void NhapMang(float F[],int n){
	for(int i=0;i<n;i++){
		cin>>F[i];
	}
}
void XuatMang(float F[],int n){
	for(int i=0;i<n;i++){
		cout<<F[i]<<"\t";
	}
}
int Dem(float F[],int n,float x){
	int d=0;
	for(int i=0;i<n;i++){
		if(F[i]==x){
			d++;
		}
	}
	return d;
}
int main(){
	int n;cin>>n;
	float F[n];
	NhapMang(F,n);
	cout<<"Mang sau khi nhap:\n";
	XuatMang(F,n);
	cout<<'\n';
	cout<<"\nNhap x:";
	float x;
	cin>>x;
	int d=Dem(F,n,x);
	cout<<'\n'<<x<<" xuat hien "<<d<<" lan."<<endl;
	return 0;
}


